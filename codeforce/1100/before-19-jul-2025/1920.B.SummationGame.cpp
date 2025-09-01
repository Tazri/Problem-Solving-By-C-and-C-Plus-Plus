// link : https://codeforces.com/problemset/problem/1920/B
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
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int li = n - 1;
    int sum = 0;
    while (x > 0)
    {
        x--;
        sum -= arr[li];
        li--;
    }

    for (int i = 0; i <= li; i++)
        sum += arr[i];

    int b = li;
    int al = n - 1;
    int mx = sum;
    while (k)
    {
        k--;
        sum += arr[al];
        al--;
        if (b >= 0)
        {

            sum -= arr[b] * 2;
            b--;
        }
        mx = max(sum, mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}