// link : https://codeforces.com/problemset/problem/633/A
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
    int a, b, c;
    cin >> a >> b >> c;
    vector<bool> dp(c + 1, false);

    if (a <= c)
        dp[a] = true;

    if (b <= c)
        dp[b] = true;

    vector<int> v = {a, b};
    for (int i = 1; i <= c; i++)
    {
        for (int ti : v)
        {
            int back = i - ti;
            if (back <= 0)
                continue;

            dp[i] = dp[i] | dp[back];
        }
    }

    if (dp[c])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}