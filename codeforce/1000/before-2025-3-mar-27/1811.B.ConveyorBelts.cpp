// link : https://codeforces.com/problemset/problem/1811/B
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

#define d(a, b) (a > b ? a - b : b - a)

int getSqr(int x, int y, int n)
{
    return min(d(x, 1), min(d(x, n), min(d(y, 1), d(y, n)))) + 1;
}

void program()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int s1 = getSqr(x1, y1, n);
    int s2 = getSqr(x2, y2, n);
    cout << d(s1, s2) << endl;
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