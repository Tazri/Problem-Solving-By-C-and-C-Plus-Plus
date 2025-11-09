// link : https://codeforces.com/problemset/problem/432/A
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
    int n, k;
    cin >> n >> k;
    int m = 5 - k;

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai <= m)
            cnt++;
    }

    cout << (cnt / 3) << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}