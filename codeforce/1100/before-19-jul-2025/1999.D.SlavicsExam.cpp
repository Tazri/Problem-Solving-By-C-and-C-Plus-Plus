// link : https://codeforces.com/problemset/problem/1999/D
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
    cin >> s;
    cin >> t;

    int ti = 0;
    bool isFound = false;
    for (int i = 0; i < s.size(); i++)
    {

        if (isFound)
        {
            if (s[i] == '?')
                s[i] = 'a';
            continue;
        }

        if (s[i] == t[ti])
        {
            ti++;
        }
        else if (s[i] == '?')
        {
            s[i] = t[ti];
            ti++;
        }

        if (ti >= t.size())
            isFound = true;
    }

    if (isFound)
    {
        cout << "YES" << endl;
        cout << s << endl;
    }
    else
        cout << "NO" << endl;
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