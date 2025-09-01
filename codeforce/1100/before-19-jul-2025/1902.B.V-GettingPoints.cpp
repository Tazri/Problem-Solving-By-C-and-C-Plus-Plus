// link : https://codeforces.com/problemset/problem/1902/B
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
    ll n, P, l, t;
    cin >> n >> P >> l >> t;

    ll total_pract = (n + 6) / 7;
    ll dp = total_pract / 2;
    ll left_pract = total_pract & 1;

    ll h1 = (t * 2) + l;
    ll h2 = t + l;

    ll take = min((P + h1 - 1) / h1, dp);
    P -= (take * h1);

    if (P <= 0)
    {
        cout << n - take << endl;
        return;
    }

    if (left_pract)
    {
        P -= h2;
    }

    if (P <= 0)
    {
        cout << n - take - left_pract << endl;
        return;
    }

    int more = (P + l - 1) / l;
    P -= (more * l);

    cout << n - more - take - left_pract << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}