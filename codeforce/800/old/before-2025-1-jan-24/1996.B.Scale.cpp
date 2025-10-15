// link : https://codeforces.com/problemset/problem/1996/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int n, m;
    cin >> n >> m;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char tmp;
            cin >> tmp;
            arr[i][j] = tmp == '1' ? 1 : 0;
        }
    }

    int s = n / m;
    int ans[s][s];

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            ans[i][j] = arr[i * m][j * m];
        }
    }

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
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