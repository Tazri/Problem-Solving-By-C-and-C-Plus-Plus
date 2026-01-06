// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
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

    int si = 0;
    int ti = 0;

    while (si < s.size() || ti < t.size())

        if (si < s.size() && ti < t.size())
            cout << s[si++] << t[ti++];
        else if (si < s.size())
            cout << s[si++];
        else
            cout << t[ti++];
    cout << endl;
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