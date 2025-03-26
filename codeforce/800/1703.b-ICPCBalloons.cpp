// link : https://codeforces.com/problemset/problem/1703/B
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
    vector<bool> mp((int)'Z' - (int)'A' + 1, false);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;

    for (char ch : s)
    {
        int chi = (int)ch - 'A';

        if (mp[chi])
        {
            ans++;
        }
        else
        {
            mp[chi] = true;
            ans += 2;
        }
    }

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