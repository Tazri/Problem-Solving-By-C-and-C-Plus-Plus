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
    int r0, x, d, n;
    cin >> r0 >> x >> d >> n;
    string s;
    cin >> s;

    int ans = 0;

    for (char ch : s)
    {
        if (ch == '2')
        {
            if (r0 >= x)
                continue;
            ans++;
            continue;
        }

        if (r0 < x)
        {
            ans++;
            continue;
        }

        r0 = max(0, r0 - d);
        ans++;
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