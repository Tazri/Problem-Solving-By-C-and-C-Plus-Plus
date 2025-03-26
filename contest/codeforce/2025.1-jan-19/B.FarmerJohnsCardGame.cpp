// link : https://codeforces.com/contest/2060/problem/B
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
    int n, m;
    cin >> n >> m;

    vector<int> arr(n * m, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int card;
            cin >> card;
            arr[card] = i;
        }
    }

    bool isAllSame = true;

    int k = 0;

    for (int i = n; i < n * m; i++)
    {
        if (arr[i] != arr[k])
        {
            cout << -1 << endl;
            return;
        }
        k++;
        k %= n;
    }

    cout << arr[0];
    for (int i = 1; i < n; i++)
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