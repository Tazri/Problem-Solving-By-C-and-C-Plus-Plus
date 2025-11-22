// link : https://codeforces.com/problemset/problem/1527/A
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

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 0;

    while (n)
    {
        cnt++;
        n >>= 1;
    }

    int ans = 0;
    for (int i = 0; i < cnt - 1; i++)
    {
        ans <<= 1;
        ans |= 1;
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