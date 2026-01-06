// linK : https://atcoder.jp/contests/abc162/tasks/abc162_c
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
    int k;
    cin >> k;

    int sum = 0;

    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= k; j++)
            for (int l = 1; l <= k; l++)
                sum += gcd(i, gcd(j, l));

    cout << sum << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}