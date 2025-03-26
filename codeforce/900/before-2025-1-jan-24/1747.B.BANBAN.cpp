// link : https://codeforces.com/problemset/problem/1747/B
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
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }

    int num = (n + 2 - 1) / 2;

    cout << num << endl;
    int l = 1;
    int r = 3 * n;

    for (int i = 0; i < num; i++)
    {
        cout << l << " " << r << endl;
        l += 3;
        r -= 3;
    }
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