// link : https://codeforces.com/problemset/problem/1899/C
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

int mxSum(vector<int> &v)
{
    int n = v.size();
    int lm1 = 0;
    int mx;

    for (int i = 1; i < n; i++)
        v[i] += v[i - 1];

    for (int r = 1; r < n; r++)
    {
        int sum = v[r] - lm1;

        if (r == 1)
            mx = sum;
        mx = max(mx, sum);
        lm1 = min(lm1, v[r]);
    }

    return mx;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> d;
    d.reserve(n);
    d.push_back(0);

    vector<int> sums;
    sums.reserve(n);

    for (int i = 0; i < n; i++)
    {
        if (d.size() == 1)
        {
            d.push_back(v[i]);
            continue;
        }

        if ((d.back() & 1) != (v[i] & 1))
        {
            d.push_back(v[i]);
            continue;
        }

        int sum = mxSum(d);
        d.clear();
        d.push_back(0);
        d.push_back(v[i]);
        sums.push_back(sum);
    }

    if (d.size() > 1)
    {
        int sum = mxSum(d);
        sums.push_back(sum);
    }

    cout << *max_element(sums.begin(), sums.end()) << endl;
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