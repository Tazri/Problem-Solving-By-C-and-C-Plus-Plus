// link : https://www.spoj.com/problems/WOWSUBSTR/en/
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

int const mod = 100007;

int fn(int n)
{
    return (n * (n + 1)) / 2;
}

int fk(int n, int k)
{
    int r = n;
    int l = n - k + 1;
    int t = r - l + 1;

    int sum = 0;

    for (int i = l; i <= r; i++)
    {
        sum += fn(i);
        sum %= mod;
    }
    return sum;
}

void program(int caseno)
{
    string s;
    cin >> s;
    map<char, int> mp;
    int last = 0;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (!mp.count(ch))
        {
            mp[ch] = i;
            continue;
        }

        if (mp[ch] < last)
        {
            mp[ch] = i;
            continue;
        }

        int r = i - 1;
        int n = r - last + 1;
        int l = mp[ch];
        int k = l - last + 1;
        int sum = fk(n, k);
        ans += sum;
        ans %= mod;
        last = l + 1;
        mp[ch] = i;
    }

    int li = s.size() - 1;

    if (last <= li)
    {
        int t = li - last + 1;
        int sum = fk(t, t);
        ans += sum;
        ans %= mod;
    }

    cout << "Case " << caseno << ": " << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}