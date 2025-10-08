// link : https://www.spoj.com/status/ns=35057510
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

int n = 1e8;
vector<bool> sieve(n + 1, false);
vector<int> prim;

void program()
{
    prim.push_back(2);
    for (int i = 3; i * i <= n; i += 2)
    {
        if (sieve[i])
            continue;

        for (int j = i * i; j <= n; j += (2 * i))
        {
            sieve[j] = true;
        }
    }

    for (int i = 3; i <= n; i += 2)
    {
        if (!sieve[i])
            prim.push_back(i);
    }

    for (int i = 0; i < prim.size(); i += 100)
    {
        cout << prim[i] << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}