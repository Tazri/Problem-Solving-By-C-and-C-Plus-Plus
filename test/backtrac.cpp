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

int sz = 10000000;
vector<bool> isPrime(sz, true);
vector<int> primes;
vector<int> filter;

void calPrimes()
{
    primes.push_back(2);

    for (int i = 3; i * i < sz; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < sz; j += (i * 2))
                isPrime[j] = false;
        }
    }

    for (int i = 3; i <= sz; i += 2)
        if (isPrime[i])
            primes.push_back(i);
}

bool isCorrect(int n)
{
    for (int i = 1; i * i * i * i <= n; i++)
    {
        int y = i * i * i * i;
        int x = n - y;
        int rtx = sqrt(x);

        if (rtx * rtx == x)
            return true;
    }

    return false;
}

void doFilter()
{
    for (int pi : primes)
    {
        // cout << "pi : " << pi << " rs : " << isCorrect(pi) << endl;
        if (isCorrect(pi))
            filter.push_back(pi);
    }
}

void program()
{
    int n;
    cin >> n;
    auto it = lower_bound(filter.begin(), filter.end(), n);
    int index = it - filter.begin();

    if (n < filter[index])
        cout << index << endl;
    else
        cout << index + 1 << endl;
}

int main()
{
    optimize();
    calPrimes();
    doFilter();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}