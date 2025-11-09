// link : https://codeforces.com/contest/492/problem/B

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
    int n, l;
    cin >> n >> l;

    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    int d1 = v[0];
    int d2 = l - v.back();

    int mx = 0;

    for (int i = 1; i < n; i++)
    {
        int d = v[i] - v[i - 1];
        mx = max(mx, d);
    }

    int d3 = mx;

    double ld1 = (double)d1;
    double ld2 = (double)d2;
    double ld3 = (double)d3;
    ld3 /= 2;

    cout << max(ld1, max(ld2, ld3)) << endl;
}

int main()
{
    optimize();
    fraction();
    program();
    return 0;
}