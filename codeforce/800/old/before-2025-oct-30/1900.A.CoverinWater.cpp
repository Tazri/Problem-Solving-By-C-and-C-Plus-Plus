// link : https://codeforces.com/problemset/problem/1900/A
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

    int mx = 0;
    int ln = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            cnt++;

        if (s[i] == '.')
        {
            ln++;
        }
        else
        {
            mx = max(mx, ln);
            ln = 0;
        }
    }

    mx = max(mx, ln);

    if (mx == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (mx >= 3)
        cout << 2 << endl;
    else
        cout << cnt << endl;
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