// link : https://codeforces.com/problemset/problem/1092/B
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

    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });
    int ans = 0;

    for (int i = 1; i < n; i += 2)
    {
        ans += (arr[i] - arr[i - 1]);
    }

    cout << ans << endl;
}

int main()
{
    optimize();

    test();
    return 0;
}