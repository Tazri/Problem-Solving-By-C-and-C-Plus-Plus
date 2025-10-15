// link: https://codeforces.com/problemset/problem/1144/A
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

    if (s.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }

    set<char> st;

    for (char ch : s)
    {
        if (st.count(ch))
        {
            cout << "NO" << endl;
            return;
        }
        st.insert(ch);
    }

    // sort
    sort(s.begin(), s.end());

    for (int i = 1; i < s.size(); i++)
    {
        int diff = (int)s[i] - (int)s[i - 1];

        if (diff != 1)
        {
            cout << "NO" << endl;
            return;
        }
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