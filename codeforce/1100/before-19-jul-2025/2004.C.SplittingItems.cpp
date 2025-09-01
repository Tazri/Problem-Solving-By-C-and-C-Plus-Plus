// link : https://codeforces.com/contest/2004/problem/C
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
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a > b; });

    for (int i = 1; i < n; i += 2)
    {
        int d = arr[i - 1] - arr[i];
        int mn = min(k, d);
        k -= mn;
        arr[i] += mn;
    }

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            odd += arr[i];
        else
            even += arr[i];
    }

    int score = even - odd;

    cout << score << endl;
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