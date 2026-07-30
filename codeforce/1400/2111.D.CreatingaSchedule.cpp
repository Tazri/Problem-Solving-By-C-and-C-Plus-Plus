// link : https://codeforces.com/problemset/problem/2111/D
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

void _DIBBA(int _DIBBA_NO)
{
    int k, n;
    cin >> k >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        int floor = vi / 100;
        v[i] = {floor, vi};
    }

    sort(v.begin(), v.end());

    vector<vector<int>> rtne(k);
    int fi = 0;
    int li = k - 1;
    int cfi = 0;
    int cli = n - 1;
    while (fi <= li)
    {
        int p1 = v[cfi].second;
        int p2 = v[cli].second;
        if (fi == li)
        {
            for (int i = 0; i < 6; i++)
            {
                rtne[fi].push_back(p1);
                swap(p1, p2);
            }

            fi++;
            li--;
            cfi++;
            cli--;
            continue;
        }

        for (int i = 0; i < 6; i++)
        {
            rtne[fi].push_back(p1);
            rtne[li].push_back(p2);
            swap(p1, p2);
        }

        fi++;
        li--;
        cfi++;
        cli--;
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << rtne[i][j] << " \n"[j == 5];
    }
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