// link : https://codeforces.com/contest/1237/problem/B
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
    string s, t;
    cin >> s >> t;

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    int cnt = 0;

    for (int i = 0; i < s.size() && i < t.size(); i++)
        if (s[i] == t[i])
            cnt++;
        else
            break;

    int ans = s.size() + t.size() - (2 * cnt);

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}