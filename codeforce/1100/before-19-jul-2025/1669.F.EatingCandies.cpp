// link : https://codeforces.com/problemset/problem/1669/F
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
    int n;
    cin >> n;
    vector<int> left(n + 1);
    vector<int> right(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> left[i];
        right[i] = left[i];
    }

    for (int i = 2; i <= n; i++)
        left[i] += left[i - 1];

    for (int i = n - 1; i >= 1; i--)
        right[i] += right[i + 1];

    int mx = 0;
    int l = 1;
    int r = n;

    while (l < r)
    {
        if (left[l] < right[r])
        {
            l++;
        }
        else if (right[r] < left[l])
        {
            r--;
        }
        else if (left[l] == right[r])
        {
            int candies = l + (n - r + 1);
            mx = max(mx, candies);
            l++;
            r--;
        }
    }

    cout << mx << endl;
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