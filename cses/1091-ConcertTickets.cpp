// link : https://cses.fi/problemset/task/1091
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
    multiset<int, greater<int>> st;

    for (int i = 0; i < n; i++)
    {
        int ti;
        cin >> ti;
        st.insert(ti);
    }

    for (int i = 0; i < m; i++)
    {
        int price;
        cin >> price;
        multiset<int, greater<int>>::iterator it = st.lower_bound(price);

        if (it == st.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            st.erase(it);
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}