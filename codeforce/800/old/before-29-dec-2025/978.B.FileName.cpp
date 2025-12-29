// link : https://codeforces.com/contest/978/problem/B
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int cnt = 0;

    for (char ch : s)
    {
        if (ch == 'x')
        {
            cnt++;
            continue;
        }

        ans += max(cnt - 2, 0);
        cnt = 0;
    }

    ans += max(cnt - 2, 0);
    cout << ans << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while(t--)
    program();
    return 0;
}