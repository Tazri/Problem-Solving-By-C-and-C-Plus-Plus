// link : https://codeforces.com/problemset/problem/1324/C
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

    int mx = 0;
    char prev;
    int len = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            prev = s[i];
            len = 1;
            continue;
        }

        if (prev == s[i])
        {
            len++;
            continue;
        }

        if (prev == 'L')
            mx = max(mx, len);
        len = 1;
        prev = s[i];
    }
    if (prev == 'L')
        mx = max(len, mx);

    cout << mx + 1 << endl;
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