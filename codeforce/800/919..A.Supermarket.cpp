// link : https://codeforces.com/problemset/problem/919/A
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

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

bool aLessB(pair<int, int> a, pair<int, int> b)
{
    int l = lcm(a.second, b.second);
    int ar = l / a.second;
    int br = l / b.second;
    a.first *= ar;
    a.second *= ar;

    b.first *= br;
    b.second *= br;
    return a < b;
}

void program()
{
    int n;
    dl m;
    cin >> n >> m;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), aLessB);

    pair<int, int>
        mn = v[0];

    double up = (double)(mn.first * m);
    double down = (double)mn.second;
    double price = up / down;

    cout << price << endl;
}

int32_t main()
{
    optimize();
    fraction();
    program();
    return 0;
}