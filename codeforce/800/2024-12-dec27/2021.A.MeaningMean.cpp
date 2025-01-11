// link : https://codeforces.com/problemset/problem/2021/A

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
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });

    for (int i = 1; i < n; i++)
    {
        double x = (arr[0] * 1.0 + arr[i] * 1.0) / 2.0;
        x = floor(x);

        arr[0] = (int)x;
    }

    cout << arr[0] << endl;
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