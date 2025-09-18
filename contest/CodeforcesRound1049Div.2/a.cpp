// link : https://codeforces.com/contest/2140/problem/A
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

    int ans = 0;
    int cnt = 0;

    for (char ch : s)
        if (ch == '1')
            cnt++;

    reverse(s.begin(), s.end());

    for (int i = 0; i < cnt; i++)
        if (s[i] == '0')
            ans++;

    cout << ans << endl;
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