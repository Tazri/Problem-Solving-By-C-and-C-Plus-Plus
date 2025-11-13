// link : https://codeforces.com/problemset/problem/1891/B
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> x;
    x.reserve(q);

    for (int i = 0; i < q; i++)
    {
        int ai;
        cin >> ai;
        if (x.empty())
        {
            x.push_back(ai);
            continue;
        }

        if (ai >= x.back())
            continue;
        x.push_back(ai);
    }

    for (int xi : x)
    {
        int add = binpow(2, xi - 1);
        int d = binpow(2, xi);

        for (int i = 0; i < n; i++)
        {
            if (v[i] % d == 0)
                v[i] += add;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " \n"[i == n - 1];
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}