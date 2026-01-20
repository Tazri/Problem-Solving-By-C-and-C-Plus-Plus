// link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
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
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int q;
    cin >> q;
    vector<int> ans;
    ans.reserve(q);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int li = lower_bound(v.begin(), v.end(), l) - v.begin();

        if (li >= n)
        {
            ans.push_back(0);
            continue;
        }

        int ri = upper_bound(v.begin(), v.end(), r) - v.begin();

        if (ri >= n)
        {
            int ai = (n - 1) - li + 1;
            ans.push_back(ai);
            continue;
        }

        ans.push_back(ri - li);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[ans.size() - 1 == i];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}