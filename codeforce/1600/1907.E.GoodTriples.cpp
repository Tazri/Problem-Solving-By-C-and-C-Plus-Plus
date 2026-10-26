// link : https://codeforces.com/problemset/problem/1907/E
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> split(10, 0);

void precal()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (i + j + k < 10)
                    split[i + j + k]++;
            }
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    int ans = 1;
    while (n)
    {
        int d = n % 10;
        n /= 10;
        ans *= split[d];
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}