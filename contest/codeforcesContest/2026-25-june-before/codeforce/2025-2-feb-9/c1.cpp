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

void test()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int bi;
    cin >> bi;

    for (int i = n - 1; i >= 0; i--)
    {
        int a = arr[i];
        int b = bi - arr[i];

        if (i == n - 1)
        {
            arr[i] = max(a, b);
            continue;
        }

        int mx = max(a, b);
        int mn = min(a, b);

        if (mx <= arr[i + 1])
        {
            arr[i] = mx;
            continue;
        }

        if (mn <= arr[i + 1])
        {
            arr[i] = mn;
            continue;
        }

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}