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

    if (n == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (n < 3)
    {
        cout << n + 1 << endl;
        return;
    }

    if (n < 15)
    {
        cout << 3 << endl;
        return;
    }

    int ans = 3;

    int cnt = n / 15;

    ans += cnt;

    if (cnt > 1)
    {
        ans += (cnt - 1) * 2;
    }

    if (n % 15 >= 1)
        ans++;
    if (n % 15 >= 2)
        ans++;

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