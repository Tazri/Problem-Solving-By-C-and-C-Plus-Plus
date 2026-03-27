// link : https://codeforces.com/contest/1794/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool isPalinedrome(string a)
{
    int l = 0;
    int r = a.size() - 1;

    while (l <= r)
    {
        if (a[l] != a[r])
            return false;

        r--;
        l++;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<string> all(2 * n - 2);

    for (int i = 0; i < all.size(); i++)
        cin >> all[i];

    sort(all.begin(), all.end());

    vector<string> big;
    vector<string> small;

    for (int i = 0; i < all.size(); i++)
    {

        if (all[i].size() == n - 1)
            big.push_back(all[i]);

        if (all[i].size() == 1)
            small.push_back(all[i]);
    }

    for (int bi = 0; bi < big.size(); bi++)
    {
        for (int si = 0; si < small.size(); si++)
        {
            vector<string> v = {big[bi] + small[si], small[si] + big[bi]};

            for (string &s : v)
            {
                if (!isPalinedrome(s))
                    continue;

                vector<string> d;
                d.reserve(2 * n - 2);

                string prefix = "";

                for (int i = 0; i < s.size() - 1; i++)
                {
                    prefix.push_back(s[i]);
                    d.push_back(prefix);
                }
                string suffix = "";

                for (int i = s.size() - 1; i > 0; i--)
                {
                    reverse(suffix.begin(), suffix.end());
                    suffix.push_back(s[i]);
                    reverse(suffix.begin(), suffix.end());
                    d.push_back(suffix);
                }

                sort(d.begin(), d.end());

                if (d == all)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }

    cout << "NO" << endl;
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