#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define FAST()                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void program()
{
    int n;
    cin >> n;
    int ans = 0;
    int mn;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (i == 0)
            mn = vi;
        mn = min(mn, vi);
        ans += mn;
    }

    cout << ans << endl;
}

int32_t main()
{
    FAST();

    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}