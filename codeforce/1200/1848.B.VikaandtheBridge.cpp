// link : https://codeforces.com/contest/1848/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    vector<vector<int>> mxstep(k + 1);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp.count(v[i]) == 0)
        {
            mp[v[i]] = i;
            mxstep[v[i]].push_back(i + 1);
            continue;
        }

        int li = mp[v[i]];
        int step = i - li;
        mp[v[i]] = i;

        mxstep[v[i]].push_back(step);
    }

    vector<bool> checked(k + 24, false);
    reverse(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (checked[v[i]])
            continue;
        checked[v[i]] = true;
        int step = i + 1;

        mxstep[v[i]].push_back(step);
    }

    int mn = n + 1;

    for (int i = 1; i <= k; i++)
    {
        if (mxstep[i].size() == 0)
            continue;
        int mx;
        for (int j = 0; j < mxstep[i].size(); j++)
        {
            mxstep[i][j]--;
            if (j == 0)
                mx = mxstep[i][j];
            mx = max(mx, mxstep[i][j]);
        }

        for (int j = 0; j < mxstep[i].size(); j++)
            if (mxstep[i][j] == mx)
            {
                mxstep[i][j] /= 2;
                break;
            }

        for (int j = 0; j < mxstep[i].size(); j++)
        {
            if (j == 0)
                mx = mxstep[i][j];
            mx = max(mxstep[i][j], mx);
        }

        mn = min(mx, mn);
    }

    cout << mn << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}