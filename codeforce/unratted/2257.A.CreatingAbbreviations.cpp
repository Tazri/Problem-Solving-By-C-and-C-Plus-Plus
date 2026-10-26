// link : https://codeforces.com/contest/2257/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    set<char> st;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        st.insert(word[0]);
    }

    bool ans = true;
    for (int i = 0; i < k; i++)
    {
        string abr;
        cin >> abr;

        for (char ch : abr)
        {
            ans &= (st.count(tolower(ch)));
        }
    }

    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}