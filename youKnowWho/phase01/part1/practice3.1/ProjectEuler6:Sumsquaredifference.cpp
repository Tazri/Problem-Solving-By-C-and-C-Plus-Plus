// link : https://www.hackerrank.com/contests/projecteuler/challenges/euler006/problem
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
    ll n;
    cin >> n;
    ll sqsum = ((n * (n + 1) * (2 * n + 1))) / 6;
    ll sum = (n * (n + 1)) / 2;
    sum *= sum;
    cout << abs(sqsum - sum) << endl;
}

int32_t main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}