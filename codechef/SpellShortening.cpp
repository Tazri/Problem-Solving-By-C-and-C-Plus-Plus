// link : https://www.codechef.com/problems/SHORTSPELL
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

bool isAscending(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i - 1] > s[i])
            return false;
    }

    return true;
}

bool isDecending(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i - 1] < s[i])
            return false;
    }
    return true;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 2)
    {
        if (s[0] > s[1])
            cout << s[1] << endl;
        else
            cout << s[0] << endl;
        return;
    }

    if (isAscending(s))
    {
        for (int i = 0; i < n - 1; i++)
            cout << s[i];
        cout << endl;
        return;
    }

    if (isDecending(s))
    {
        cout << "here" << endl;
        for (int i = 1; i < n - 1; i++)
            cout << s[i];
        cout << endl;
        return;
    }

    int d = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] > s[i + 1])
        {
            d = i;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == d)
            continue;
        cout << s[i];
    }
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