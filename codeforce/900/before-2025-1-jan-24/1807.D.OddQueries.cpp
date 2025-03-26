// link : https://codeforces.com/problemset/problem/1807/D
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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    vector<int> sumArr(n + 1);
    sumArr[0] = 0;
    arr[0] = 0;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        sumArr[i] = sum;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, k;
        cin >> l >> r >> k;
        int lr = sumArr[r] - sumArr[l - 1];
        int newSum = sum - lr;
        int add = (r - l + 1) * k;
        newSum += add;
        if (newSum & 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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