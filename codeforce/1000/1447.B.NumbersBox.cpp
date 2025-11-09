// link : https://codeforces.com/problemset/problem/1447/B
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
    int n, m;
    cin >> n >> m;

    vector<int> arr(n * m);
    int minus = 0;
    int zero = 0;
    int sum = 0;
    int mn = -1;
    for (int i = 0; i < n * m; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            minus++;
            arr[i] *= -1;
        }
        if (arr[i] == 0)
            zero++;

        sum += arr[i];

        if (i == 0)
            mn = arr[i];
        mn = min(arr[i], mn);
    }

    if (mn == 0 || minus % 2 == 0)
    {
        cout << sum << endl;
        return;
    }

    sum -= (mn * 2);
    cout << sum << endl;
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