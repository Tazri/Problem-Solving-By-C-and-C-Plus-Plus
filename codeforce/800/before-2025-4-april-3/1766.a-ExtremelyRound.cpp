// link : https://codeforces.com/problemset/problem/1766/A
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

    if (n <= 10)
    {
        cout << n << endl;
        return;
    }

    int ans = 9;

    for (int i = 10; i <= 999999; i *= 10)
    {
        int u = i * 10;
        if (n > u)
            ans += 9;
        else
        {
            ans += (n / i);
            break;
        }
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