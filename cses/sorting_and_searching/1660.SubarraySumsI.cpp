// link: https://cses.fi/problemset/task/1660/
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

#define int ll

void program()
{
    int n, x;
    cin >> n >> x;

    vector<int> pre(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> pre[i];
        pre[i] += pre[i - 1];
    }

    map<int, int> mp;
    mp[pre[0]]++;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int lm1 = pre[i] - x;

        if (mp.count(lm1))
        {
            cnt += mp[lm1];
        }
        mp[pre[i]]++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}