// link : https://codeforces.com/problemset/problem/1921/D
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
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    vector<ll> b(m);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    for (ll &bi : b)
        cin >> bi;

    sort(b.begin(), b.end());

    ll sum = 0;

    ll li = 0;
    ll ri = m - 1;
    ll left = 0;
    ll right = n - 1;

    while (left <= right)
    {
        ll al = arr[left];
        ll ar = arr[right];

        ll leftDiff = max(abs(b[li] - al), abs(b[ri] - al));
        ll rightDiff = max(abs(b[li] - ar), abs(b[ri] - ar));

        if (leftDiff > rightDiff)
        {
            sum += leftDiff;
            left++;
            if (abs(b[li] - al) > abs(b[ri] - al))
                li++;
            else
                ri--;
        }
        else
        {
            sum += rightDiff;
            right--;

            if (abs(b[li] - ar) > abs(b[ri] - ar))
                li++;
            else
                ri--;
        }
    }

    cout << sum << endl;
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