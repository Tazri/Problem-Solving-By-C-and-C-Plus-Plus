// link : https://codeforces.com/problemset/problem/379/A
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
    int a, b;
    cin >> a >> b;
    int ans = 0;

    ans += a;
    while (a != 0 && a >= b)
    {
        int left = a % b;
        a /= b;
        ans += a;
        a += left;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}