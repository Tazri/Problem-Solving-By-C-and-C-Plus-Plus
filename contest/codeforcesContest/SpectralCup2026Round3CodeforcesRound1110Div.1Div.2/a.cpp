#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GO_PROGRAM_GO_()         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _ANTI_MARA_PROGRAM(int _CASENO)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n < k * 2)
    {
        cout << -1 << endl;
        return;
    }

    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (s[i] == 'L')
            cnt++;
    }

    for (int i = 0; i < k; i++)
    {
        if (s[n - 1 - i] == 'R')
            cnt++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    _GO_PROGRAM_GO_();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _ANTI_MARA_PROGRAM(i);
    return 0;
}