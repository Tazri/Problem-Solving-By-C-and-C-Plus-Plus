// link : https://judge.yosupo.jp/problem/double_ended_priority_queue
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
    multiset<int> st;

    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    for (int i = 0; i < q; i++)
    {
        int t, x;

        cin >> t;

        if (t == 0)
        {
            cin >> x;
            st.insert(x);
        }
        else if (t == 1)
        {
            int mn = *st.begin();
            st.erase(st.begin());
            cout << mn << endl;
        }
        else if (t == 2)
        {
            int mx = *st.rbegin();
            multiset<int>::iterator it = st.find(mx);
            st.erase(it);
            cout << mx << endl;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}