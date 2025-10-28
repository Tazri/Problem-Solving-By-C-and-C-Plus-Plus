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

int llmod(int a, int mod)
{
    return ((a % mod) + mod) % mod;
}

long long modpow(long long a, long long b, long long mod)
{
    long long res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int inverseMod(int upper, int lower, int p)
{
    int pm2 = p - 2;
    int inverse = modpow(lower, pm2, p);
    int upperMinverse = upper * inverse;
    return llmod(upperMinverse, p);
}

void program()
{
    int a, b, p, x1, y1, x2, y2;
    cin >> a >> b >> p >> x1 >> y1 >> x2 >> y2;

    int spcly = llmod(-1 * y2, p);

    if (x1 == x2 && y1 == spcly)
    {
        cout << "POINT_AT_INFINITY" << endl;
        return;
    }

    int x3, y3, lemda;
    if (x1 == x2 && y1 == y2)
    {

        int upper = 3 * x1 * x1 + a;
        int lower = 2 * y1;
        lemda = inverseMod(upper, lower, p);
        x3 = llmod((lemda * lemda) - (2 * x1), p);
        y3 = llmod((lemda * (x1 - x3)) - y1, p);
    }
    else
    {
        int upper = (y2 - y1);
        int lower = (x2 - x1);
        lemda = inverseMod(upper, lower, p);
        x3 = llmod((lemda * lemda) - x1 - x2, p);
        y3 = llmod((lemda * (x1 - x3)) - y1, p);
    }
    cout << x3 << " " << y3 << endl;
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