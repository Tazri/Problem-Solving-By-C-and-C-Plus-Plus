// link : https://codeforces.com/problemset/problem/1593/B
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

int rm(string s, string t)
{
    int cnt = 0;

    while (s.size() && t.size())
    {
        if (s.back() == t.back())
        {
            s.pop_back();
            t.pop_back();
        }
        else
        {
            s.pop_back();
            cnt++;
        }
    }

    if (t.size())
        return -1;
    return cnt;
}

void program()
{
    string s;
    cin >> s;

    vector<string> v = {"00", "75", "25", "50"};
    int ans = -1;
    for (string ti : v)
    {
        int res = rm(s, ti);

        if (res < 0)
            continue;

        if (ans == -1)
            ans = res;
        ans = min(ans, res);
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