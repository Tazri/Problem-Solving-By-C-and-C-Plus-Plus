// link : https://codeforces.com/problemset/problem/1077/B
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

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] == 0)
        {
            if (arr[i - 1] == 1 && arr[i + 1] == 1)
            {
                ans++;
                arr[i + 1] = 0;
                i++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}