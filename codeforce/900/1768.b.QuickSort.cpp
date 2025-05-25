// link : https://codeforces.com/problemset/problem/1768/B
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
    int si = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1)
        {
            si = 0;
        }
    }

    int p = 0;
    int sorted = 0;
    for (int i = si; i < n; i++)
    {
        if (p + 1 == arr[i])
        {
            sorted++;
            p = arr[i];
        }
    }

    int rm = n - sorted;

    int op = (rm + k - 1) / k;

    cout << op << endl;
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