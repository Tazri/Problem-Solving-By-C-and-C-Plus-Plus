// link : https://codeforces.com/problemset/problem/709/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n, b, d;
    cin >> n >> b >> d;

    int sum = 0;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai > b)
            continue;

        sum += ai;
        if (sum > d)
        {
            sum = 0;
            time++;
        }
    }

    cout << time << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}