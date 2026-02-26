#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll f(ll n)
{
    ll sum = 0;
    while (n)
    {
        ll d = n % 10;
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

void program()
{
    vector<int> v;
    for (int x = 0; x <= 100000; x++)
    {
        if (f(f(x)) == f(x))
        {
            v.push_back(x);
        }
    }

    cout << "cnt : " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        int fx = f(v[i]);

        if (fx >= 10)
            cout << "x : " << v[i] << " -> f(x) : " << f(v[i]) << endl;
    }
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}