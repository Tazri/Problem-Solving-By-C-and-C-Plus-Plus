// link : https://basecamp.eolymp.com/en/problems/2099
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
    vector<int> arr(n);
    vector<int> ans;
    ans.reserve(n);
    multiset<int> st;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    for (int ai : arr)
    {
        if (st.find(ai) == st.end())
            ans.push_back(ai);
    }

    cout << ans.size() << endl;

    if (ans.size())
    {
        cout << ans[0];
        for (int i = 1; i < ans.size(); i++)
            cout << " " << ans[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}