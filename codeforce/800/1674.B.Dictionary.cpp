// link : https://codeforces.com/contest/1674/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

map<string, int> mp;

void precal()
{
    int index = 1;
    for (char c1 = 'a'; c1 <= 'z'; c1++)
    {
        for (char c2 = 'a'; c2 <= 'z'; c2++)
        {
            if (c1 == c2)
                continue;
            string word;
            word.push_back(c1);
            word.push_back(c2);

            mp[word] = index++;
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    string word;
    cin >> word;
    cout << mp[word] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}