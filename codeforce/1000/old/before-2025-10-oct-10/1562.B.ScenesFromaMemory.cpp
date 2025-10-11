// link : https://codeforces.com/problemset/problem/1562/B
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

char onePrime(string s)
{
    for (char ch : s)
    {
        if (ch == '1' || ch == '4' || ch == '6' || ch == '8' || ch == '9')
        {
            return ch;
        }
    }
    return '0';
}

char twofive(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '2' || s[i] == '5')
            return s[i];
    }
    return '0';
}

void program()
{
    string s;
    int len;
    cin >> len;
    cin >> s;

    if (len == 1)
    {
        cout << 1 << endl;
        cout << s << endl;
        return;
    }

    char op = onePrime(s);

    if (op != '0')
    {
        cout << 1 << endl;
        cout << op << endl;
        return;
    }

    cout << 2 << endl;
    char tf = twofive(s);

    if (tf != '0')
    {
        cout << s[0] << tf << endl;
        return;
    }

    vector<int> mp((int)'9' - (int)'0' + 1, 0);

    // 2,3,5,7
    // 2 -> 27
    // 3 -> 33
    // 5 -> 57
    // 7 -> 77

    for (int i = len - 1; i >= 0; i--)
    {
        char d = s[i];
        int di = (int)s[i] - (int)'0';

        if (d == '2' && mp[7])
        {
            cout << 27 << endl;
            return;
        }

        if (d == '3' && mp[3])
        {
            cout << 33 << endl;
            return;
        }

        if (d == '5' && mp[7])
        {
            cout << 57 << endl;
            return;
        }

        if (d == '7' && mp[7])
        {
            cout << 77 << endl;
            return;
        }

        mp[di]++;
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