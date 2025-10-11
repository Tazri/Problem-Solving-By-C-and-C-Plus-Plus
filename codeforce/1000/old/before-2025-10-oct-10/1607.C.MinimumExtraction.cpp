// link : https://codeforces.com/problemset/problem/1607/C
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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
    {
        cout << arr[0] << endl;
        return;
    }

    // sort it
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    int minus = arr[0];
    int mx = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i] -= minus;

        mx = max(mx, arr[i]);
        minus += arr[i];
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