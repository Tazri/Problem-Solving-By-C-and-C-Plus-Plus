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
    ll n, k, s;
    cin >> n >> k >> s;

    ll ai = 1;
    ll sum = 0;
    for (ll i = 0; i < n; i++, ai += 2)
    {
        sum += ai;
    }
    s -= sum;
    k--;
    cout << (s / k) << endl;
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