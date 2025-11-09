// link : https://codeforces.com/contest/131/problem/A
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

bool f1(string s)
{
    for (char ch : s)
    {
        if (toupper(ch) != ch)
            return false;
    }

    return true;
}

bool f2(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != toupper(s[i]))
            return false;
    }

    return tolower(s[0]) == s[0];
}

void program()
{
    string s;

    cin >> s;

    if (f1(s) || f2(s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (tolower(s[i]) == s[i])
            {
                s[i] = toupper(s[i]);
            }
            else
            {
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s << endl;
}

int main()
{
    optimize();

    program();

    return 0;
}