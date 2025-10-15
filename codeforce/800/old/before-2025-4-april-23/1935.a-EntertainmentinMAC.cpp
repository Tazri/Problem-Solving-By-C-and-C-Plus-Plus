// link : https://codeforces.com/problemset/problem/1935/A
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
    int li = s.size() - 1;
    int fi = 0;

    while (fi < li)
    {
        if (s[fi] != s[li])
            break;
        fi++;
        li--;
    }

    if (fi >= li)
    {
        cout << s << endl;
        return;
    }

    if (s[fi] < s[li])
    {
        if (n & 1)
        {
            string rs = s;
            reverse(rs.begin(), rs.end());
            cout << s + rs << endl;
        }
        else
            cout << s << endl;
        return;
    }

    string rs = s;
    reverse(s.begin(), s.end());
    n--;

    if (n & 1)
        cout << s + rs << endl;
    else
        cout << s << endl;
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