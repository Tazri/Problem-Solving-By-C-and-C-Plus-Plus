// link : https://codeforces.com/problemset/problem/1979/B
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

    cin >> arr[0];
    int mn = arr[0];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];

        mn = min(arr[i], mn);
    }

    int mn2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % mn != 0)
        {
            if (mn2 < 0)
                mn2 = arr[i];
            else
                mn2 = min(mn2, arr[i]);
        }
    }

    if (mn2 < 0)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % mn != 0 && arr[i] % mn2 != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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