// link : https://codeforces.com/problemset/problem/1689/B
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

int getMinimum(int ex, vector<bool> &arr)
{
    int found = -1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (i == ex)
            continue;

        if (arr[i])
        {
            arr[i] = false;
            found = i;
            break;
        }
    }

    return found;
}

void test()
{
    int n;
    cin >> n;
    vector<bool> mp(n + 1, true);
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    bool willSwap = false;
    for (int i = 1; i <= n; i++)
    {
        int ex = arr[i];
        int num = getMinimum(ex, mp);
        if (num != -1)
            arr[i] = num;
        else
        {
            willSwap = true;
            arr[i] = arr[i];
        }
    }

    if (willSwap)
    {
        int temp = arr[n];
        arr[n] = arr[n - 1];
        arr[n - 1] = temp;
    }

    // print arr
    cout << arr[1];
    for (int i = 2; i <= n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
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