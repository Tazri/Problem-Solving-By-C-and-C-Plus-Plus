// link: https://codeforces.com/problemset/problem/1520/A
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
    string s;
    cin >> s;

    string rms = "";
    s.reserve(n);

    for (char ch : s)
    {

        if (rms.empty())
        {
            rms.push_back(ch);
            continue;
        }

        if (rms.back() != ch)
            rms.push_back(ch);
    }

    set<char> st;

    for (char ch : rms)
    {
        if (st.count(ch))
        {
            cout << "NO" << endl;
            return;
        }
        st.insert(ch);
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