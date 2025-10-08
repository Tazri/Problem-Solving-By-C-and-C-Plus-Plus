// link : https://codeforces.com/contest/2149/problem/A
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
    int minus = 0;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (ai == 0)
            zero++;
        else if (ai < 0)
            minus++;
    }

    int ans = zero;

    if (minus & 1)
        ans += 2;
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