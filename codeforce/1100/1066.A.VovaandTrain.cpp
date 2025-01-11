// link : https://codeforces.com/problemset/problem/1066/A
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
    int L, u, l, r;
    cin >> L >> u >> l >> r;
    int total = L / u;
    int leftTotal = (l - 1) / u;
    int rightTotal = r / u;
    int hidden = rightTotal - leftTotal;
    int seen = total - hidden;
    cout << seen << endl;
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