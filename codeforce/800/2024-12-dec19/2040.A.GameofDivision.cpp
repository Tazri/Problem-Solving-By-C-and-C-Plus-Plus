// link : https://codeforces.com/problemset/problem/2040/A
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
    int n, k;

    cin >> n >> k;
    vector<int>
        arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool isValid = true;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }

            int diff = arr[i] > arr[j] ? arr[i] - arr[j] : arr[j] - arr[i];

            if (diff % k == 0)
            {
                isValid = false;
                break;
            }
        }

        if (isValid)
        {
            cout << "YES" << endl;
            cout << i + 1 << endl;
            return;
        }
    }

    cout << "NO" << endl;
    ;
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