// link : https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    vector<int> ans;
    ans.reserve(n);

    set<int> st;

    for (int i = 0; i < 2 * n; i++)
    {
        int vi;
        cin >> vi;
        if (st.count(vi))
            continue;

        ans.push_back(vi);
        st.insert(vi);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " \n"[i == n - 1];
    }
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