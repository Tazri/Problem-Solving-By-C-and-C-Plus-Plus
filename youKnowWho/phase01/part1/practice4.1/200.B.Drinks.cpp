// link : https://codeforces.com/problemset/problem/200/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction(n)               \
    cout.unsetf(ios::floatfield); \
    cout.precision(n);            \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int n;
    cin >> n;

    double sum = 0;

    for (int i = 0; i < n; i++)
    {
        double l;
        cin >> l;

        sum += (l / 100.0);
    }

    double ans = (sum / (n * 1.0)) * 100.0;
    fraction(12);
    cout << ans << endl;
    return 0;
}