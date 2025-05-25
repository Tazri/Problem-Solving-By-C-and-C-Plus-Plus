// link : https://atcoder.jp/contests/abc236/tasks/abc236_c?lang=en
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
    int n, m;
    cin >> n >> m;
    vector<string> names(n);
    multiset<string> st;

    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        st.insert(s);
    }

    for (string name : names)
    {
        if (st.find(name) != st.end())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}