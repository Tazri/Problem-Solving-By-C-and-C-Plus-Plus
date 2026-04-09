// link : https://codeforces.com/contest/2132/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

void _DIBBA()
{
    int n;
    cin >> n;
    vector<int> ans;

    int p = 10;
    for (int i = 1; i <= 18; i++)
    {
        int d = p + 1;

        if (n % d == 0)
        {
            ans.push_back(n / d);
        }
        p *= 10;
    }

    sort(ans.begin(), ans.end());

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " \n"[i == ans.size() - 1];
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}