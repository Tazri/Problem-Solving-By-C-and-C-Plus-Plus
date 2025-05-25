// link : https://atcoder.jp/contests/abc320/tasks/abc320_a?lang=en
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

int calPow(int base, int p)
{
    int ans = 1;
    for (int i = 0; i < p; i++)
    {
        ans *= base;
    }

    return ans;
}

void program()
{
    int a, b;
    cin >> a >> b;

    int aPowerB = calPow(a, b);
    int bPowerA = calPow(b, a);
    int ans = aPowerB + bPowerA;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}