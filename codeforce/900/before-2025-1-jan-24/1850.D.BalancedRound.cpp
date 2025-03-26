// link : https://codeforces.com/problemset/problem/1850/D
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    int mx = 1;

    int len = 1;
    for (int i = 1; i < n; i++)
    {
        int diff = arr[i] - arr[i - 1];

        if (diff <= k)
        {
            len++;
        }
        else
        {
            mx = max(mx, len);
            len = 1;
        }
    }

    mx = max(mx, len);

    cout << n - mx << endl;
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