#include <bits/stdc++.h>
using namespace std;

void solve()
{

    long long n, q, l, r, k, sum = 0;
    cin >> n >> q;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    for (long long i = 0; i < q; i++)
    {
        cin >> l >> r >> k;
        sum = 0;
        vector<long long> p = a;
        for (long long i = l - 1; i < r; i++)
            p[i] = k;

        for (long long i = 0; i < n; i++)
        {
            // cout<<p[i]<<" ";
            sum += p[i];
        }
        // cout<<endl;
        // cout<<sum<<endl;

        if (sum % 2 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}