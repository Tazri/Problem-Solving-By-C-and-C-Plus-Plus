#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

long countTriplets(vector<long> arr, long r)
{
    long n = arr.size();
    map<long, long> left;
    map<long, long> right;

    for (int i = 1; i < n; i++)
    {
        right[arr[i]]++;
    }
    left[arr[0]]++;
    long ans = 0;
    for (int j = 1; j < n - 1; j++)
    {
        right[arr[j]]--;

        if (arr[j] % r != 0)
        {
            left[arr[j]]++;
            continue;
        }

        long p1 = arr[j] / r;
        long p3 = arr[j] * r;
        long cnt = left[p1] * right[p3];
        ans += cnt;
        left[arr[j]]++;
    }

    return ans;
}

void program()
{
    long n, r;
    cin >> n >> r;
    vector<long> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << countTriplets(v, r) << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}