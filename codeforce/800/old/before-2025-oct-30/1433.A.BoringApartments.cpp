// link: https://codeforces.com/problemset/problem/1433/A
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
    int x;
    cin >> x;

    int d = x % 10;

    int ans = (d - 1) * 10;

    int cnt = 0;
    int i = 1;
    while (x)
    {
        x /= 10;
        cnt += i;
        i++;
    }
    ans += cnt;
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