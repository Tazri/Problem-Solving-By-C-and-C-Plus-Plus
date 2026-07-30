// link : https://www.codechef.com/problems/CHEFFAV
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
    int n;
    string s;
    cin >> n;
    cin >> s;

    string left = "code";
    string right = "chef";

    int fi = s.find(left);
    int ri = s.find(right);

    if (fi < ri)
        cout << "AC" << endl;
    else
        cout << "WA" << endl;
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