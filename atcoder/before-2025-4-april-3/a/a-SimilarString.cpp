// link : https://atcoder.jp/contests/abc303/tasks/abc303_a?lang=en
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
    int n;
    cin >> n;
    string s, t;
    cin >> s;
    cin >> t;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'o')
            s[i] = '0';
        if (s[i] == 'l')
            s[i] = '1';
        if (t[i] == 'o')
            t[i] = '0';
        if (t[i] == 'l')
            t[i] = '1';
    }

    if (s == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}