#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GO_PROGRAM_GO_()         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _ANTI_MARA_PROGRAM(int _CASENO)
{
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++)
        if (s[i] == '1')
        {
            s[i] = '*';
            break;
        }

    for (int i = 0; i < n; i++)
        if (s[i] == '0')
        {
            s[i] = '*';
            break;
        }

    for (char ch : s)
        if (ch == '1' || ch == '0')
            cout << ch;
    cout << endl;
}

int32_t main()
{
    _GO_PROGRAM_GO_();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _ANTI_MARA_PROGRAM(i);
    return 0;
}