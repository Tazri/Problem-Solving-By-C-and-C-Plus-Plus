// link : https://acm.hdu.edu.cn/showproblem.php?pid=1412
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

void program(int n, int m)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    for (int i = 0; i < m; i++)
    {
        int bi;
        cin >> bi;
        st.insert(bi);
    }

    vector<int> ans;
    ans.reserve(n + m);

    for (int si : st)
    {
        ans.push_back(si);
    }

    cout << ans[0];
    for (int i = 1; i < ans.size(); i++)
        cout << " " << ans[i];
    cout << endl;
}

int main()
{
    optimize();
    int n, m;
    while (cin >> n >> m)
        program(n, m);
    return 0;
}