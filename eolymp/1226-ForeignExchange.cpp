// link : https://basecamp.eolymp.com/en/problems/1226
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
    multiset<pair<int, int>> st;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p;
        cin >> p.first >> p.second;
        pair<int, int> t;
        t.first = p.second;
        t.second = p.first;

        multiset<pair<int, int>>::iterator it = st.find(t);
        if (it == st.end())
        {
            st.insert(p);
        }
        else
        {
            st.erase(it);
        }
    }

    if (st.size() == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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