// link : https://codeforces.com/contest/2074/problem/A
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
    set<int> st;

    for (int i = 0; i < 4; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    if (st.size() > 1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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