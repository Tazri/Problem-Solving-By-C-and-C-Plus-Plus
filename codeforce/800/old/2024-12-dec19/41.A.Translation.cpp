// link: https://codeforces.com/problemset/problem/41/A
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

int main()
{
    optimize();
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = 0, j = t.size() - 1; i < t.size(); i++, j--)
    {
        if (s[i] != t[j])
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}