// link : https://codeforces.com/problemset/problem/327/A

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
    int cnt = 0;
    int n;
    cin >> n;
    vector<int> v;
    int prev;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (i == 0)
        {
            if (vi)
                v.push_back(-1);
            else
                v.push_back(1);
            continue;
        }

        if (vi)
        {
            if (v.back() < 0)
                v.back()--;
            else
                v.push_back(-1);
        }
        else
        {
            if (v.back() > 0)
                v.back()++;
            else
                v.push_back(1);
        }
    }

    if (v.size() == 1)
    {
        if (v.back() < 0)
            cout << n - 1 << endl;
        else
            cout << n << endl;
        return;
    }

    int ans = 0;
    if (v[0] < 0)
    {
        ans += (-1 * v[0]);
        v.erase(v.begin());
    }

    if (v.size() == 1)
    {
        ans += v[0];
        cout << ans << endl;
        return;
    }

    v.insert(v.begin(), 0);
    vector<int> pre(v.size());

    for (int i = 1; i < v.size(); i++)
    {
        pre[i] += v[i] + pre[i - 1];
    }

    // for (int vi : v)
    //     cout << vi << " ";
    // cout << endl;
    // for (int vi : pre)
    //     cout << vi << " ";
    // cout << endl;

    int lm1 = 0;
    int li = 0;
    int ri = 0;
    int mx = 0;
    for (int r = 1; r < pre.size(); r++)
    {
        int curr = pre[r] - pre[lm1];

        if (curr > mx)
        {
            mx = curr;
            ri = r;
            li = lm1 + 1;
        }

        if (pre[lm1] > pre[r])
        {
            lm1 = r;
        }
    }

    // cout << "li : " << li << " ri : " << ri << " mx : " << mx << endl;

    for (int i = 0; i < v.size(); i++)
        if (v[i] < 0)
            ans += (-1 * v[i]);

    cout << ans + mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}