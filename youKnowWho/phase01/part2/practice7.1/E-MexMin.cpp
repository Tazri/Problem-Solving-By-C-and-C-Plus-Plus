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

struct DS
{
    map<int, int> mp;
    set<int> st;
    DS(int n)
    {
        for (int i = 0; i <= n; i++)
            st.insert(i);
    }

    void insert(int n)
    {
        st.erase(n);
        mp[n]++;
    }

    void erase(int n)
    {
        mp[n]--;

        if (mp[n] == 0)
        {
            mp.erase(n);
            st.insert(n);
        }
    }

    int mex()
    {
        return *(this->st.begin());
    }
};

void program()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    DS ds(n);

    for (int &vi : v)
        cin >> vi;

    for (int i = 0; i < m; i++)
        ds.insert(v[i]);

    vector<int> mv;
    mv.reserve(m);
    mv.push_back(ds.mex());

    for (int l = 0, r = m; r < n; r++, l++)
    {
        ds.erase(v[l]);
        ds.insert(v[r]);
        mv.push_back(ds.mex());
    }

    cout << *min_element(mv.begin(), mv.end()) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}