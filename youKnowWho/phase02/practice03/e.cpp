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

    map<string, int> mp;
    while (n--)
    {
        string name;
        cin >> name;
        if (mp.count(name))
        {
            int cnt = mp[name];
            mp[name]++;
            name += ("(" + to_string(cnt) + ")");
            cout << name << endl;
            continue;
        }

        mp[name]++;
        cout << "SAVED" << endl;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}