// link : https://codeforces.com/problemset/problem/1926/C
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

ll sz = (2 * 1e5);

ll digitSum(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

vector<ll> sum(sz + 123, 0);

void build()
{
    for (int i = 1; i <= sz; i++)
    {
        sum[i] = sum[i - 1] + digitSum(i);
    }
};

void program()
{
    ll n;
    cin >> n;
    cout << sum[n] << endl;
}

int main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}