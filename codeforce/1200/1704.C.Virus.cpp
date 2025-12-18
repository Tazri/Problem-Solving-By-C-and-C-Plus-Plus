// link : https://codeforces.com/problemset/problem/1704/C
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
    int n, m;
    cin >> n >> m;
    vector<int> v(m);

    for (int &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());
    vector<int> gap;
    gap.reserve(m);
    for (int i = 1; i < m; i++)
    {
        int g = v[i] - v[i - 1] - 1;
        gap.push_back(g);
    }

    int lg = (n - v.back()) + v.front() - 1;
    gap.push_back(lg);

    sort(gap.rbegin(), gap.rend());

    int saved = 0;

    for (int i = 0; i < gap.size(); i++)
    {

        int gone = (2 * i) * 2;
        int g = gap[i];
        g -= gone;
        if (g <= 0)
            continue;

        if (g == 1)
            saved += 1;
        else
            saved += max(g - 1, 0);
    }
    cout << n - saved << endl;
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