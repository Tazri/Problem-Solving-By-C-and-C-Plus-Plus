// link : https://codeforces.com/problemset/problem/1927/A
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = -1;
    int r = -1;
    for (int i = 0; i < n; i++)
        if (s[i] == 'B')
        {
            l = i;
            break;
        }

    for (int j = n - 1; j >= 0; j--)
        if (s[j] == 'B')
        {
            r = j;
            break;
        }

    if (l == -1 || r == -1)
    {
        cout << 0 << endl;
        return;
    }

    int ans = r - l + 1;

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