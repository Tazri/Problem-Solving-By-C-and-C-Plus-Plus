// link : http://basecamp.eolymp.com/en/problems/3966
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
    multiset<int> st;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int ai;
        cin >> ai;
        if (st.find(ai) == st.end())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}