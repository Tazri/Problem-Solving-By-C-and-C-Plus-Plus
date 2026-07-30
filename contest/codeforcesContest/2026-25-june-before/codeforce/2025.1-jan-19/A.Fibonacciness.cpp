// link : https://codeforces.com/contest/2060/problem/A
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
    vector<int> arr(6);

    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[4];
    cin >> arr[5];

    int mx = 0;

    int count = 0;

    arr[3] = arr[1] + arr[2];
    for (int i = 1; i <= 3; i++)
    {
        if (arr[i + 2] == arr[i] + arr[i + 1])
        {
            count++;
        }
    }

    mx = max(mx, count);

    count = 0;
    arr[3] = arr[4] - arr[3];
    for (int i = 1; i <= 3; i++)
    {
        if (arr[i + 2] == arr[i] + arr[i + 1])
        {
            count++;
        }
    }

    mx = max(mx, count);
    count = 0;
    arr[3] = arr[5] - arr[4];
    for (int i = 1; i <= 3; i++)
    {
        if (arr[i + 2] == arr[i] + arr[i + 1])
        {
            count++;
        }
    }

    mx = max(mx, count);
    count = 0;
    cout << mx << endl;
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