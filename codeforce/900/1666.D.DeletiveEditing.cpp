// link : http://codeforces.com/problemset/problem/1666/D
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
    string s, t;
    cin >> s >> t;
    set<char> black;

    while (s.size() && t.size())
    {
        if (black.count(t.back()))
        {
            cout << "NO" << endl;
            return;
        }

        if (s.back() == t.back())
        {
            s.pop_back();
            t.pop_back();
            continue;
        }

        black.insert(s.back());
        s.pop_back();
    }

    if (t.size())
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