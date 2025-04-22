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
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll mv = 0;

    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), [](ll a, ll b)
         { return a > b; });

    for (ll i = 0; i < n; i++)
    {
        if (k > 0)
        {
            k--;
            continue;
        }

        mv += arr[i];
    }

    cout << mv << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}