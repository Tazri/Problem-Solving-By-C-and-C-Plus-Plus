// link : https://codeforces.com/problemset/problem/474/B
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
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    for (int i = 1; i <= n; i++)
        arr[i] += arr[i - 1];

    int q;
    cin >> q;
    while (q--)
    {
        int qi;
        cin >> qi;

        auto it = lower_bound(arr.begin(), arr.end(), qi);

        int ans = it - arr.begin();

        cout << ans << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}