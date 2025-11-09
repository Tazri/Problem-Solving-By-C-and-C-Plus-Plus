// link : https://codeforces.com/problemset/problem/1520/B
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

    int cnt = 0;
    int ld = 0;
    int cpn = n;
    while (n)
    {
        int d = n % 10;
        ld = d;
        n /= 10;
        cnt++;
    }

    int num = 0;

    for (int i = 0; i < cnt; i++)
    {
        num *= 10;
        num += ld;
    }

    bool allSame = num <= cpn;

    int ans = ((cnt - 1) * 9) + ld - 1;
    ans += allSame;
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