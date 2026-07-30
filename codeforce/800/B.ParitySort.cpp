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
    int n;
    cin >> n;
    vector<pair<int, int>> odd;
    vector<pair<int, int>> even;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi & 1)
            odd.push_back({vi, i});
        else
            even.push_back({vi, i});
    }
    vector<int> v(n);

    vector<int> vi;
    for (pair<int, int> p : odd)
        vi.push_back(p.second);

    sort(odd.begin(), odd.end());

    for (int i = 0; i < odd.size(); i++)
        v[vi[i]] = odd[i].first;
    vi.clear();

    for (pair<int, int> p : even)
        vi.push_back(p.second);

    sort(even.begin(), even.end());

    for (int i = 0; i < even.size(); i++)
        v[vi[i]] = even[i].first;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] > v[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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