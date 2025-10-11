// link : https://codeforces.com/problemset/problem/1691/B
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
    vector<int> arr(n + 2, 0);
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    for (int ai : arr)
    {
        if (mp[ai] == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    int l = 1;
    bool isFirst = true;
    for (int i = 1; i <= n + 1; i++)
    {
        if (arr[i] == arr[l])
            continue;
        int r = i - 1;

        if (isFirst)
        {
            isFirst = false;
            cout << r;
        }
        else
            cout << " " << r;

        for (int t = l; t < r; t++)
            cout << " " << t;
        l = i;
    }
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