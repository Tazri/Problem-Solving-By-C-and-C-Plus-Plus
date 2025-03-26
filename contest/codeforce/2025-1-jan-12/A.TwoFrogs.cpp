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
    int n, a, b;
    cin >> n >> a >> b;
    if (n == 2)
    {
        cout << "NO" << endl;
        return;
    }

    int dis = a > b ? a - b - 1 : b - a - 1;

    if (dis & 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}