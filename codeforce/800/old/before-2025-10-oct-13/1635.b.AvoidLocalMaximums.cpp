// link : https://codeforces.com/problemset/problem/1635/B
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
    vector<int> mp(n, false);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int op = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            mp[i] = true;
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (mp[i - 1] && mp[i + 1])
        {
            arr[i] = max(arr[i + 1], arr[i - 1]);
            op++;
            mp[i - 1] = false;
            mp[i + 1] = false;
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (mp[i])
        {
            arr[i] = max(arr[i - 1], arr[i + 1]);
            mp[i] = false;
            op++;
        }
    }

    cout << op << endl;
    cout << arr[0];
    for (int i = 1; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
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