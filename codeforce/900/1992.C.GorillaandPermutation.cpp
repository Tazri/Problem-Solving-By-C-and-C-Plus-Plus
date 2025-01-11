// link : https://codeforces.com/problemset/problem/1992/C
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
    int n, m, k;
    cin >> n >> m >> k;

    int f = n - m;
    int ni = n;
    for (int i = 0; i < f; i++)
    {
        cout << ni << " ";
        ni--;
    }

    for (int i = 1; i <= ni; i++)
    {
        cout << i << " ";
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