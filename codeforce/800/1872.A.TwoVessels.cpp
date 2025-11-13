// link : https://codeforces.com/problemset/problem/1872/A
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

void program()
{
    double a, b, c;
    cin >> a >> b >> c;
    double sum = a + b;

    double eq = sum / 2.0;

    double mn = min(a, b);

    double d = eq - mn;
    double ans = d / c;
    int ansint = ceil(ans);
    cout << ansint << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}