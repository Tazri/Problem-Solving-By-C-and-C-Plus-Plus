// link : https://codeforces.com/contest/750/problem/A

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

int sum(int n)
{
    return (n * (5 + (n * 5))) / 2;
}

void program()
{
    int n, rm;
    cin >> n >> rm;
    int left = (60 * 4) - rm;

    int l = 0;
    int r = n;
    int ans = 0;

    while (l <= r)
    {
        int m = l + (r - l) / 2;

        if (sum(m) <= left)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}