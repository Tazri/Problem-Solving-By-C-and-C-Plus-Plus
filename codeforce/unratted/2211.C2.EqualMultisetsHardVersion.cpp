// link : https://codeforces.com/contest/2211/problem/C2
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
    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    vector<int> mp(n + 1, 0);

    for (int i = 1; i <= k; i++)
        mp[a[i]]++;

    for (int i = 1; i <= k; i++)
    {
        if (b[i] == -1)
            continue;

        if (mp[b[i]] > 0)
        {
            mp[b[i]]--;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i <= k; i++)
    {
        bool allEqual = true;

        for (int l = i, r = l + k; r <= n; r += k)
            if (a[l] != a[r])
            {
                allEqual = false;
                break;
            }

        if (allEqual)
        {
            set<int> st;

            for (int l = i, r = l + k; r <= n; r += k)
            {
                if (b[l] != -1)
                    st.insert(b[l]);
                if (b[r] != -1)
                    st.insert(b[r]);
            }

            if (st.size() > 1)
            {
                cout << "NO" << endl;
                return;
            }

            if (st.size() == 1)
            {
                b[i] = *st.begin();
            }
            continue;
        }

        for (int l = i, r = l + k; r <= n; r += k)
        {
            if ((a[l] == b[l] || b[l] == -1) && (a[r] == b[r] || b[r] == -1))
                continue;

            cout << "NO" << endl;
            return;
        }
        b[i] = a[i];
    }

    mp = vector<int>(n + 1, 0);

    for (int i = 1; i <= k; i++)
        mp[a[i]]++;

    for (int i = 1; i <= k; i++)
    {
        if (b[i] == -1)
            continue;

        if (mp[b[i]] > 0)
        {
            mp[b[i]]--;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

void hijack(int no)
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    if (no == 911)
    {
        cout << n << " " << k << endl;
        for (int i = 1; i <= n; i++)
            cout << a[i] << " \n"[i == n];
        for (int i = 1; i <= n; i++)
            cout << b[i] << " \n"[i == n];
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    // if (t != 10000)
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    // else
    //     for (int i = 1; i <= t; i++)
    //         hijack(i);
    return 0;
}