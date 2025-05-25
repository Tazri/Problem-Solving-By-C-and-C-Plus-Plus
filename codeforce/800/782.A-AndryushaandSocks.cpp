// link : https://codeforces.com/problemset/problem/782/A
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
    multiset<int> st;

    int mx = st.size();

    for (int i = 0; i < 2 * n; i++)
    {
        int ai;
        cin >> ai;

        if (st.find(ai) == st.end())
        {
            st.insert(ai);
        }
        else
        {
            st.erase(ai);
        }

        int sz = st.size();
        mx = max(mx, sz);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}