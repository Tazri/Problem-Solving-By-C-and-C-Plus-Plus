// link : https://codeforces.com/problemset/problem/679/A
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

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

vector<int> v;

bool query(int x)
{
    cout << x << endl;
    cout.flush();

    string res;
    cin >> res;
    return res == "yes";
}

void program()
{

    int cnt = 0;
    for (int &vi : v)
    {
        if (query(vi))
        {
            for (int x = vi * vi; x <= 100; x *= vi)
            {
                if (x <= 100 && query(x))
                {
                    cout << "composite" << endl;
                    return;
                }
            }
            cnt++;
            if (cnt > 1)
            {
                cout << "composite" << endl;
                return;
            }
        }
    }
    cout << "prime" << endl;

    return;
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    takePrimes(50, v);
    while (t--)
        program();
    return 0;
}