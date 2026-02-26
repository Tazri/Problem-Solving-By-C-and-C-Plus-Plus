// link : https://codeforces.com/problemset/problem/1601/A
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
    vector<int> v(32);

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        for (int j = 0; j < 30; j++)
        {
            if (ai & (1 << j))
                v[j]++;
        }
    }

    bool allZero = true;

    for (int i = 0; i < v.size(); i++)
        if (v[i])
        {
            allZero = false;
            break;
        }

    if (allZero)
    {
        for (int i = 1; i <= n; i++)
            cout << i << " \n"[i == n];
        return;
    }

    int g = 0;

    for (int i = 0; i < v.size(); i++)
        g = gcd(g, v[i]);

    set<int> st;

    for (int i = 1; i * i <= g; i++)
    {
        if (g % i != 0)
            continue;
        st.insert(i);
        st.insert(g / i);
    }

    vector<int> ans;
    for (int si : st)
        ans.push_back(si);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}