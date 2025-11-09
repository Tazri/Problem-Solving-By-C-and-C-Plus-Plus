// link : https://codeforces.com/problemset/problem/935/A
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
    int ans = 1;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        if (n / i == i)
            ans++;
        else
            ans += 2;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}