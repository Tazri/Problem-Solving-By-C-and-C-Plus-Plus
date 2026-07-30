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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < k; i++)
        if (s[i] == 'W')
            cnt++;

    int ans = cnt;

    for (int l = 0, r = k; r < n; r++, l++)
    {
        if (s[l] == 'W')
            cnt--;
        if (s[r] == 'W')
            cnt++;
        ans = min(cnt, ans);
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