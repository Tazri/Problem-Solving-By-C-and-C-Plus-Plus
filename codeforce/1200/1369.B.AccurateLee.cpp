// link : https://codeforces.com/problemset/problem/1369/B
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

    if (n == 1)
    {
        cout << s << endl;
        return;
    }

    string ans = "";

    int si = -1;

    for (int i = n - 1; i > 0; i--)
    {
        if (s[i - 1] == '1' && s[i] == '0')
        {
            si = i;
            break;
        }
    }
    if (si == -1)
    {
        cout << s << endl;
        return;
    }

    bool oneZero = true;

    for (int i = 0; i < n; i++)
        if (s[i] == '1')
            break;
        else
            cout << s[i];

    cout << "0";
    for (int i = si; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (oneZero)
                continue;
            cout << s[i];
            continue;
        }
        oneZero = false;
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