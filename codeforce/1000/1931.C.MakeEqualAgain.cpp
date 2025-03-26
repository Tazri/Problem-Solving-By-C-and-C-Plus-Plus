// link : https://codeforces.com/problemset/problem/1931/C
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

    int llen = 1;
    int rlen = 0;
    bool isleftSet = false;
    bool isRightSet = false;
    int lai;
    int len = 1;
    int prev;
    cin >> prev;
    lai = prev;

    for (int i = 1; i < n; i++)
    {
        int curr;
        cin >> curr;

        if (curr == prev)
        {
            len++;
            prev = curr;
            continue;
        }

        if (!isleftSet)
        {
            llen = len;
            len = 1;
            isleftSet = true;
            prev = curr;
            continue;
        }
        len = 1;
        prev = curr;
    }
    int rai = 0;

    if (isleftSet)
    {
        rlen = len;
        rai = prev;
    }
    else
    {
        llen = len;
    }

    if (rai == lai)
    {
        int ans = n - (rlen + llen);

        cout << max(ans, 0) << endl;
    }
    else
    {
        int mx = max(rlen, llen);

        int ans = n - mx;

        cout << max(ans, 0) << endl;
    }
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