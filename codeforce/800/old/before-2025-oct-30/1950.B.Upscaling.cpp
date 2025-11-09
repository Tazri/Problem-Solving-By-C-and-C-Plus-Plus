// link : https://codeforces.com/contest/1950/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;
    string s1(2 * n, '.');
    string s2(2 * n, '.');

    char ch = '#';
    for (int i = 0; i < 2 * n; i += 2, ch = ch == '#' ? '.' : '#')
    {
        s1[i] = ch;
        s1[i + 1] = ch;

        char rch = ch == '#' ? '.' : '#';
        s2[i] = rch;
        s2[i + 1] = rch;
    }

    bool one = true;
    for (int i = 0; i < 2 * n; i += 2)
    {
        if (one)
        {
            cout << s1 << endl;
            cout << s1 << endl;
        }
        else
        {
            cout << s2 << endl;
            cout << s2 << endl;
        }

        one = !one;
    }
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