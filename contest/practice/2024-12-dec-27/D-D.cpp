// link : https://atcoder.jp/contests/abc310/tasks/abc310_a?lang=en
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

int main()
{
    optimize();
    int n, p, q;

    cin >> n >> p >> q;

    int lowestPrice;
    cin >> lowestPrice;

    for (int i = 1; i < n; i++)
    {
        int price;
        cin >> price;
        lowestPrice = min(lowestPrice, price);
    }

    // if buy dish
    int billWithCopon = lowestPrice + q;

    if (billWithCopon < p)
    {
        cout << billWithCopon << endl;
    }
    else
    {
        cout << p << endl;
    }
    return 0;
}