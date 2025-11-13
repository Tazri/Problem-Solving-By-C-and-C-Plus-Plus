// linK : https://codeforces.com/contest/1907/problem/A
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
    string s;

    cin >> s;
    int r = (int)s[1] - (int)'0';

    for (int i = 1; i <= 8; i++)
    {
        if (i == r)
            continue;

        cout << s[0] << i << endl;
    }

    for (char a = 'a'; a <= 'h'; a++)
    {
        if (a == s[0])
            continue;
        cout << a << s[1] << endl;
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