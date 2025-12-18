// link : https://codeforces.com/problemset/problem/1328/B
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

ll getStartFrom(ll n)
{
    n -= 2;
    ll sum = (n * (n + 1)) / 2;
    sum += 1;
    return sum;
}

void program()
{
    ll n, k;
    cin >> n >> k;
    ll si;
    ll l = 2;
    ll r = n;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll frm = getStartFrom(mid);

        if (frm <= k)
        {
            si = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    ll fi = k - getStartFrom(si);

    string ans(n, 'a');
    ans[fi + 1 - 1] = 'b';
    ans[si - 1] = 'b';
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}