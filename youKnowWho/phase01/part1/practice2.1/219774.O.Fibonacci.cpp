// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O
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

    vector<ll> fib(52);

    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i < fib.size(); i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << fib[n] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}