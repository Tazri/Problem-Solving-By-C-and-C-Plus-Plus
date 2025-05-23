// link : https://codeforces.com/problemset/problem/2031/B
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

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] - arr[i] == 1)
        {
            // swap
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
        }
    }

    // check is ok
    bool isOk = true;

    for (int i = 0; i < n; i++)
    {
        if (i + 1 != arr[i])
        {
            isOk = false;
            break;
        }
    }

    if (isOk)
    {
        cout << "YES" << endl;
    }
    else
    {
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