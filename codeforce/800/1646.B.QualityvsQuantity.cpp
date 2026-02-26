// link : https://codeforces.com/problemset/problem/1646/B
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

#define int ll

bool check(int lsum, int rsum, int l, int r, int n)
{
    int left = l + 1;
    int right = (n - 1) - r + 1;

    return rsum > lsum && right < left;
}

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int l = 0;
    int r = n - 1;
    int lsum = 0;
    int rsum = 0;

    // for (int vi : v)
    //     cout << vi << " ";
    // cout << endl;

    while (l <= r)
    {
        if (rsum <= lsum)
        {
            rsum += v[r];

            if (check(lsum, rsum, l - 1, r, n))
            {
                cout << "YES" << endl;
                return;
            }
            r--;
            continue;
        }

        lsum += v[l];
        if (check(lsum, rsum, l, r + 1, n))
        {
            cout << "YES" << endl;
            return;
        }
        l++;
    }

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