//  link : https://codeforces.com/problemset/problem/2007/B
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

void test()
{
    int n, m;
    cin >> n >> m;
    int mx;
    cin >> mx;

    for (int i = 1; i < n; i++)
    {
        int a;
        cin >> a;
        mx = max(mx, a);
    }

    while (m--)
    {
        int l, r;
        char sign;
        cin >> sign >> l >> r;

        if (mx >= l && mx <= r)
        {
            mx += (sign == '+' ? 1 : -1);
        }

        cout << mx << " ";
    }
    cout << endl;
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