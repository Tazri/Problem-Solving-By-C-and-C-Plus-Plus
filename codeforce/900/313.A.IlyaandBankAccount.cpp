// link :  https://codeforces.com/problemset/problem/313/A
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
    int n;
    cin >> n;

    if (n > 0)
    {
        cout << n << endl;
        return 0;
    }

    int two = (n * -1) % 100;
    int num = (n * -1) / 100;
    int a = two % 10;
    int b = two / 10;

    int mn = min(a, b);

    num = (num * 10) + mn;

    cout << -1 * num << endl;
    return 0;
}