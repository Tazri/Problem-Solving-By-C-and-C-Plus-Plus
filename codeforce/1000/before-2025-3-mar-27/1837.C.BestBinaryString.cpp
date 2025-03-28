// link : https://codeforces.com/problemset/problem/1837/C
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

    // convert from last
    int li = s.size() - 1;

    for (int i = li; i >= 0; i--)
    {
        if (s[i] == '0')
            break;

        if (s[i] == '?')
            s[i] = '1';
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            break;
        if (s[i] == '?')
            s[i] = '0';
    }

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '?')
            s[i] = s[i - 1];
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