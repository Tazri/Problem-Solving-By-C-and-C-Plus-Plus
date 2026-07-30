#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int check(vector<int> &v, int tr)
{
    int n = v.size();
    int i = 0;
    bool incmp = false;
    int less = 0;
    int greater = 0;
    int cnt = 0;
    while (i < n)
    {
        if (v[i] == tr)
        {
            i++;
            while (less != greater && i < n)
            {
                if (v[i] < tr)
                    less++;
                if (v[i] > tr)
                    greater++;
                else if (v[i] == tr)
                {
                    if (less < greater)
                        less++;
                    else
                        greater++;
                }
                i++;
            }

            if (less == greater)
            {
                cnt++;
                less = 0;
                greater = 0;
                continue;
            }

            return -1;
        }

        if (v[i] < tr)
            less++;
        else if (v[i] > tr)
            greater++;
        i++;
    }

    if (less != greater)
        return -1;

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> st;
    vector<int> d;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (st.count(v[i]))
            continue;
        d.push_back(v[i]);
        st.insert(v[i]);
    }

    int mx = 1;
    for (int tr : d)
    {
        int res = check(v, tr);
        cout << tr << " res : " << res << endl;

        if (res == -1)
            continue;

        mx = max(res, mx);
    }

    cout << mx << endl;
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