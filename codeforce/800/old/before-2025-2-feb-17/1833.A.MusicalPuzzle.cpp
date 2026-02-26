// link : https://codeforces.com/contest/1833/problem/A
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
    ll n;
    cin >> n;

    string s;
    cin >> s;
    set<string> st;

    for (int i = 1; i < n; i++)
    {
        st.insert({s[i - 1], s[i]});
    }

    cout << st.size() << endl;
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