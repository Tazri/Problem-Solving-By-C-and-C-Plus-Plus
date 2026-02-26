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
    cout.precision(20);           \
    cout.setf(ios::fixed, ios::floatfield)

int p(int x)
{
    return x * x;
}

void program()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }

    int mn = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int d = p(v[i].first - v[j].first) + p(v[j].second - v[i].second);

            if (mn == -1)
                mn = d;
            mn = min(d, mn);
        }
    }

    cout << sqrt(mn) << endl;
}

int32_t main()
{
    optimize();
    fraction();
    program();
    return 0;
}