// link : https://codeforces.com/problemset/problem/1973/A
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
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    int sum = p1 + p2 + p3;

    if (sum & 1)
    {
        cout << -1 << endl;
        return;
    }

    int halfSum = sum / 2;
    int p1Andp2 = p1 + p2;
    cout << min(halfSum, p1Andp2) << endl;
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