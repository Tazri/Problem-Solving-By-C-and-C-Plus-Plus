// link : https://codeforces.com/contest/540/problem/A
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
    ll n;
    cin >> n;

    string s, t;

    cin >> s;
    cin >> t;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a = s[i] - '0';
        int b = t[i] - '0';

        int c1 = abs(a - b);

        int c2 = min(a, b) + 10 - max(a, b);

        // cout << c1 << " " << c2 << endl;
        ans += min(c1, c2);
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    // cin >> t;
    // while(t--)
    program();
    return 0;
}