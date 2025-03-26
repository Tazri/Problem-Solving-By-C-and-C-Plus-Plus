// link : https://codeforces.com/problemset/problem/160/A
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

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> coins(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(), coins.end(), [](int a, int b)
         { return a > b; });

    int halfSum = sum / 2;
    int take = 0;
    int takeSum = 0;

    for (int i = 0; i < n; i++)
    {
        takeSum += coins[i];
        take++;
        if (takeSum > halfSum)
            break;
    }
    cout << take << endl;
    return 0;
}