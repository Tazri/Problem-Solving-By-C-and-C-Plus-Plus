// link : https://codeforces.com/problemset/problem/1991/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int n;
    cin >> n;

    int mx;
    cin >> mx;

    for (int i = 2; i <= n; i++)
    {
        int tmp;
        cin >> tmp;

        if (i & 1)
        {
            mx = max(mx, tmp);
        }
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}