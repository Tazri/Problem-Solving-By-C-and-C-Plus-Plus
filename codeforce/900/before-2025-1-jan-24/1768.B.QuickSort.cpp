// link : https://codeforces.com/problemset/problem/1768/B
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
    vector<int> arr(n + 1);
    int mx = -1;
    arr[0] = 0;
    int rm = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != (i - rm))
        {
            rm++;
        }
    }

    int ans = (rm + k - 1) / k;
    cout << ans << endl;
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