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
    ll n;
    cin >> n;

    vector<ll> arr(1);

    cin >> arr[0];

    for (ll i = 1; i < n; i++)
    {
        ll prev = arr.back();
        ll curr;
        cin >> curr;
        if (prev < 0 && curr < 0)
        {
            arr[arr.size() - 1] += curr;
        }
        else if (prev < 0 && curr > 0)
        {
            arr.push_back(curr);
        }
        else if (prev > 0 && curr > 0)
        {
            arr[arr.size() - 1] += curr;
        }
        else
        {
            arr.push_back(curr);
        }
    }

    ll minSum = 0;
    ll posSum = 0;

    for (ll i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            minSum += (arr[i] * -1);
        }
        else if (arr[i] > 0)
        {
            posSum += arr[i];
        }
    }

    ll sum = minSum;
    ll mxSum = max(minSum, posSum);

    posSum = 0;

    for (ll i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            sum -= (arr[i] * -1);
        }
        if (arr[i] > 0)
        {
            sum += arr[i];
        }

        mxSum = max(sum, mxSum);
    }

    cout << mxSum << endl;
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
