// link : https://codeforces.com/problemset/problem/1826/B
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

int getX(int a, int b)
{
    int mn = min(a, b);
    int mx = max(a, b);

    if (mn == 0)
        return mx;
    if (mn != 1 && mx % mn == 0)
        return mn;
    return mx - mn;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    bool equal = true;

    for (int i = 1; i < n; i++)
        if (v[i] != v[i - 1])
        {
            equal = false;
            break;
        }

    if (equal)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> x;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        x.push_back(v[l] - v[r]);
        l++;
        r--;
    }

    int g = x.front();

    for (int xi : x)
        g = gcd(g, xi);
    cout << g << endl;
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