// link : https://codeforces.com/problemset/problem/1791/D
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

    vector<bool> lmp((int)'z' - (int)'a' + 1, false);
    vector<bool> rmp((int)'z' - (int)'a' + 1, false);
    vector<int> l(n, 0);
    vector<int> r(n, 0);

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int chi = (int)s[i] - (int)'a';

        if (lmp[chi])
        {
            l[i] = cnt;
        }
        else
        {
            lmp[chi] = true;
            cnt++;
            l[i] = cnt;
        }
    }

    cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int chi = (int)s[i] - (int)'a';
        if (rmp[chi])
        {
            r[i] = cnt;
        }
        else
        {
            rmp[chi] = true;
            cnt++;
            r[i] = cnt;
        }
    }

    int mx = l[0] + r[1];

    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, l[i] + r[i + 1]);
    }

    cout << mx << endl;
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