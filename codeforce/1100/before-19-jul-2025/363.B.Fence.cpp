// link : https://codeforces.com/problemset/problem/363/B
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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ans = 0;
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    int mnSum = sum;

    int l = 0;

    for (int i = k; i < n; i++, l++)
    {
        sum += arr[i];
        sum -= arr[l];

        if (sum < mnSum)
        {
            mnSum = sum;
            ans = l + 1;
        }
    }

    cout << ans + 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}