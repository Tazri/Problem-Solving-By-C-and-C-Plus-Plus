// link : https://codeforces.com/problemset/problem/1480/A
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

    for (int i = 0; i < s.size(); i++)
    {
        if (i & 1)
        {
            if (s[i] == 'z')
                s[i] = 'y';
            else
                s[i] = 'z';
        }
        else
        {
            if (s[i] == 'a')
                s[i] = 'b';
            else
                s[i] = 'a';
        }
    }
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