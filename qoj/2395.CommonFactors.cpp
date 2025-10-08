#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

ll phiPrim(ll prim)
{
    return prim - 1;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> allPrm;
    ll prm = 1;

    ll k = 1;
    for (ll i : primes)
    {
        if (k * i > n)
        {
            break;
        }
        allPrm.push_back(i);
        k *= i;
    }

    for (ll pi : allPrm)
        prm *= phiPrim(pi);

    ll g = k - prm;
    cout << g / gcd(g, k) << "/" << k / gcd(g, k) << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}