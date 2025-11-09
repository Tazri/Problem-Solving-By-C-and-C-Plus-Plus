// link : https://codeforces.com/problemset/problem/1791/A
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

set<char> st;

void program()
{
    char ch;
    cin >> ch;

    if (st.count(ch))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    string s = "codeforces";
    for (char ch : s)
        st.insert(ch);
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}