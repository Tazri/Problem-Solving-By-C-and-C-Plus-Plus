// link : https://codeforces.com/contest/2191/problem/A
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
    int n;
    cin >> n;
    vector<pair<int, int>> v1(n);
    vector<pair<int, int>> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i].first;

        v2[i].first = v1[i].first;

        if (i & 1)
        {
            v1[i].second = 0;
            v2[i].second = 1;
        }
        else
        {
            v1[i].second = 1;
            v2[i].second = 0;
        }
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    bool c1 = true;
    bool c2 = true;

    for (int i = 1; i < n; i++)
    {
        if (v1[i - 1].second == v1[i].second)
            c1 = false;

        if (v2[i - 1].second == v2[i].second)
            c2 = false;
    }

    if (c1 || c2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}