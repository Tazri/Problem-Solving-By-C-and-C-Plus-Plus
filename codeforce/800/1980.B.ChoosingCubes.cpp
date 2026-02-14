// link : https://codeforces.com/problemset/problem/1980/B
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
    int n, f, k;
    cin >> n >> f >> k;

    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    f--;
    int fav = v[f];

    sort(v.rbegin(), v.rend());

    int has = 0;

    for (int &vi : v)
        if (vi == fav)
            has++;

    int cnt = has;

    for (int i = 0; i < k; i++)
        if (fav == v[i])
            cnt--;
    if (cnt == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (cnt == has)
        cout << "NO" << endl;
    else
        cout << "MAYBE" << endl;
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