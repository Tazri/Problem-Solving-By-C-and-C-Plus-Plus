// link : https://codeforces.com/problemset/problem/1688/A
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
    int ans = 0;
    int cn = n;
    int mask = 1;

    int b = cn & 1;
    while (b == 0)
    {
        cn >>= 1;
        mask <<= 1;
        b = cn & 1;
    }

    ans |= mask;

    mask = 1;
    cn = n;
    b = cn & 1;
    while (b == 1)
    {
        cn >>= 1;
        mask <<= 1;
        b = cn & 1;
    }

    int cntOne = 0;
    cn = n;
    while (cn)
    {
        b = cn & 1;
        if (b)
            cntOne++;
        cn >>= 1;
    }

    if (cntOne == 1)
    {
        ans |= mask;
    }
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}