// link: https://codeforces.com/contest/2185/problem/A
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
    set<int> st;
    vector<int> v;
    v.reserve(n);
    int left = n;
    int rt = 1;
    while (true)
    {
        if (left <= 0)
            break;

        if (st.count(rt))
        {
            rt++;
            continue;
        }
        left--;
        v.push_back(rt);
        st.insert(rt * rt);
        rt++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " \n"[i == n - 1];
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