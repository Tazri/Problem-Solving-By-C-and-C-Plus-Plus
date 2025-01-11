// link : https://codeforces.com/problemset/problem/2048/B
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

    vector<int> arr(n + 1, 0);

    int ni = 1;
    for (int i = 1; i * k <= n; i++)
    {
        arr[i * k] = ni++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = ni++;
        }
    }

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