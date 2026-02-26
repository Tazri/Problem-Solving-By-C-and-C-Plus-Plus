// link : https://codeforces.com/problemset/problem/440/A
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
    int n;
    cin >> n;

    int xr = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        int ei;
        cin >> ei;
        xr ^= ei;
        xr ^= i;
    }
    xr ^= n;
    cout << xr << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}