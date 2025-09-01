// link : https://codeforces.com/problemset/problem/1015/C
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
    ll n, limit;
    cin >> n >> limit;

    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> d(n);
    vector<ll> file(n);

    ll bsum = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        file[i] = i;
        cin >> a[i] >> b[i];
        d[i] = a[i] - b[i];
        sum += a[i];
        bsum += b[i];
    }

    if (bsum > limit)
    {
        cout << -1 << endl;
        return;
    }
    // sort
    sort(file.begin(), file.end(), [&d](ll ai, ll bi)
         { return d[ai] > d[bi]; });

    ll cnt = 0;
    for (ll f : file)
    {
        if (sum <= limit)
            break;

        cnt++;
        sum -= a[f];
        sum += b[f];
    }
    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}