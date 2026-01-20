// link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
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
    cout.precision(8);            \
    cout.setf(ios::fixed, ios::floatfield)
int n;
int k;
vector<dl> v;

bool isPossible(dl size)
{
    int cnt = 0;
    for (dl &vi : v)
        cnt += (int)(vi / size);

    return cnt >= k;
}

void program()
{
    cin >> n >> k;
    v = vector<dl>(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dl er = 1e-8;
    dl l = er;
    dl r = (dl)1e9;
    dl ans = 0;
    while ((r - l) >= 1e-8)
    {
        dl mid = l + (r - l) / 2.0;
        if (isPossible(mid))
        {
            ans = mid;
            l = mid + er;
        }
        else
            r = mid - er;
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