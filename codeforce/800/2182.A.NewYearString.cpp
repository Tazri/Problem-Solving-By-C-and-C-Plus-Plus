// link : https://codeforces.com/contest/2182/problem/A
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

    bool y26 = s.find("2026") != string::npos;
    bool y25 = s.find("2025") != string::npos;

    if (y26)
    {
        cout << 0 << endl;
        return;
    }
    if (!y25)
    {
        cout << 0 << endl;
        return;
    }

    cout << 1 << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}