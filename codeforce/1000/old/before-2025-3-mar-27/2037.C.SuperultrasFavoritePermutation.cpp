// link : https://codeforces.com/problemset/problem/2037/C
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

    if (n <= 4)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 2; i <= n; i += 2)
    {
        if (i == 4)
            continue;
        cout << i << " ";
    }

    cout << 4 << " " << 5;

    for (int i = 1; i <= n; i += 2)
    {
        if (i == 5)
            continue;
        cout << " " << i;
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