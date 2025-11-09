// link : https://codeforces.com/problemset/problem/579/A
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
    int ans = 0;

    while (n)
    {
        if (n & 1)
            ans++;
        n >>= 1;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}