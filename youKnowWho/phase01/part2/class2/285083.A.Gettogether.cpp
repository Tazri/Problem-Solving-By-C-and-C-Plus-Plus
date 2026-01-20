// linK: https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/A
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

#define err 1e-7

bool ok(vector<pair<dl, dl>> &v, dl sec)
{
    dl lmx = v.front().first - (v.front().second * sec);
    dl rmn = v.front().first + (v.front().second * sec);

    for (pair<dl, dl> &p : v)
    {
        dl go = p.second * sec;
        dl l = p.first - go;
        dl r = p.first + go;
        lmx = max(l, lmx);
        rmn = min(r, rmn);
    }

    return lmx <= rmn;
}

void program()
{
    int n;
    cin >> n;
    vector<pair<dl, dl>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    dl l = (dl)0;
    dl r = (dl)1e18;
    dl ans = 1;
    while (l <= r)
    {
        dl mid = l + (r - l) / 2;

        if (ok(v, mid))
        {
            ans = mid;
            r = mid - err;
        }
        else
        {
            l = mid + err;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    fraction();
    program();
    return 0;
}