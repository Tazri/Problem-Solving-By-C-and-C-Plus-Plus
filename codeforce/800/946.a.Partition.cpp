// link : https://codeforces.com/problemset/problem/946/A
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
    int n;
    cin >> n;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (ai < 0)
            ai *= -1;
        sum += ai;
    }

    cout << sum << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}