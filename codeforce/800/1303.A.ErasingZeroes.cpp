// link : https://codeforces.com/contest/1303/problem/A
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
    int n = s.size();
    int l = -1, r = -1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            continue;

        if (l == -1)
            l = i;
        r = i;
    }

    if (l == -1)
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;

    for (int i = l; i <= r; i++)
    {
        if (s[i] == '0')
            cnt++;
    }

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