// link : https://codeforces.com/problemset/problem/1294/C
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

vector<int> primes;

void takePrimes(int n, vector<int> &primes)
{
    if (n < 2)
        return;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    primes.clear();
    primes.push_back(2);

    for (int i = 3; i * i <= n; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 3; i <= n; i += 2)
        if (isPrime[i])
            primes.push_back(i);
}

bool check(int a, int b, int c)
{
    if (a == b || b == c || a == c)
        return false;
    return true;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v;
    v.reserve(144);
    int cp = n;
    for (int &pi : primes)
    {
        if (pi > cp)
            break;

        if (cp % pi != 0)
            continue;

        while (cp % pi == 0)
        {
            cp /= pi;
            v.push_back(pi);
        }
    }

    if (cp != 1)
        v.push_back(cp);

    if (v.size() < 3)
    {
        cout << "NO" << endl;
        return;
    }

    if (v.size() >= 6)
    {
        cout << "YES" << endl;
        int a = v[0];
        int b = v[1] * v[2];
        int c = 1;
        for (int i = 3; i < v.size(); i++)
            c *= v[i];
        cout << a << " " << b << " " << c << endl;
        return;
    }

    if (v.size() == 3)
    {
        bool ok = true;
        for (int i = 1; i < 3; i++)
            if (v[i] == v[i - 1])
                ok = false;

        if (ok)
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[1] << " " << v[2] << endl;
        }
        else
            cout << "NO" << endl;
        return;
    }

    int len = v.size();
    for (int i = 0; i < len - 2; i++)
        for (int j = i + 1; j < len - 1; j++)
            for (int k = j + 1; k < len; k++)
            {
                int a = 1;
                int b = 1;
                int c = 1;

                for (int t = 0; t <= i; t++)
                    a *= v[t];

                for (int t = j; t < k; t++)
                    b *= v[t];

                for (int t = k; t < len; t++)
                    c *= v[t];

                if (check(a, b, c))
                {
                    cout << "YES" << endl;
                    cout << a << " " << b << " " << c << endl;
                    return;
                }
            }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    takePrimes(1e5, primes);
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}