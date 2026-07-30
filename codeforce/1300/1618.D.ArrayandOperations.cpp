// linK : https://codeforces.com/problemset/problem/1618/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());
    vector<int> vk;
    for (int i = 0; i < 2 * k; i++)
        vk.push_back(v[i]);

    int score = 0;
    for (int i = 2 * k; i < n; i++)
        score += v[i];
    int l = k - 1;
    int r = vk.size() - 1;
    reverse(vk.begin(), vk.end());

    while (0 <= l)
    {
        score += (vk[l] / vk[r]);
        l--;
        r--;
    }

    cout << score << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}