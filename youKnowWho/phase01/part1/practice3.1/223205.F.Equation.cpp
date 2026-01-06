// link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
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

#define int ll

void program()
{
    int x, n;
    cin >> x >> n;

    int sum = 0;
    int res = 1;
    for (int i = 2; i <= n; i += 2)
    {
        res *= x * x;
        sum += res;
    }
    cout << sum << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}