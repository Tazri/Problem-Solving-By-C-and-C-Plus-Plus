// link : https://atcoder.jp/contests/abc329/tasks/abc329_c?lang=en
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

int main()
{
    optimize();
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> mp('z' - 'a' + 1, 0);

    // count long

    char prev = s[0];
    int len = 1;

    for (int i = 1; i < s.size(); i++)
    {
        if (prev == s[i])
        {
            len++;
        }
        else
        {
            int prevchi = (int)s[i - 1] - (int)'a';
            mp[prevchi] = max(mp[prevchi], len);
            prev = s[i];
            len = 1;
        }
    }
    int prevchi = (int)prev - (int)'a';
    mp[prevchi] = max(mp[prevchi], len);

    // count now
    int ans = 0;
    for (int i = 0; i <= (int)'z' - (int)'a'; i++)
    {
        if (mp[i])
        {
            ans += mp[i];
        }
    }

    cout << ans << endl;
    return 0;
}