// link : https://codeforces.com/problemset/problem/460/A
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
    int n, m;
    cin >> n >> m;
    int ans = n;

    while (n >= m)
    {
        int r = n % m;
        n /= m;
        ans += n;
        n += r;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}