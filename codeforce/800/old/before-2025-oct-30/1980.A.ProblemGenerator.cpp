// link: https://codeforces.com/problemset/problem/1980/A
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
    int n, m;
    cin >> n >> m;
    vector<int> mp((int)'G' - (int)'A' + 1, 0);

    string s;
    cin >> s;

    for (char ch : s)
    {
        mp[(int)ch - (int)'A']++;
    }

    int ans = 0;

    for (int i = 0; i < mp.size(); i++)
    {
        if (mp[i] >= m)
            continue;
        ans += m - mp[i];
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