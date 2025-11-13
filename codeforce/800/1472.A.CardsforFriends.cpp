// link : https://codeforces.com/problemset/problem/1472/A
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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void program()
{
    int w, h, n;
    cin >> w >> h >> n;

    int wcnt = 0;
    int hcnt = 0;
    while (w % 2 == 0)
    {
        wcnt++;
        w /= 2;
    }

    while (h % 2 == 0)
    {
        hcnt++;
        h /= 2;
    }

    int wp = binpow(2, wcnt);
    int hp = binpow(2, hcnt);

    int total = wp * hp;

    if (n <= total)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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