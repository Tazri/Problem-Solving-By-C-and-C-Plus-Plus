// link : https://codeforces.com/problemset/problem/1747/A
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
    int n;
    cin >> n;
    int sum = 0;

    while (n--)
    {
        int vi;
        cin >> vi;
        sum += vi;
    }

    cout << abs(sum) << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}