// link : https://codeforces.com/problemset/problem/1673/B
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
    string s;
    cin >> s;
    int n = s.size();
    string d;
    d.reserve(n);
    set<char> st;

    for (char ch : s)
    {
        if (st.count(ch))
            break;
        st.insert(ch);
        d.push_back(ch);
    }

    int di = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != d[di])
        {
            cout << "NO" << endl;
            return;
        }
        di++;
        di %= d.size();
    }

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