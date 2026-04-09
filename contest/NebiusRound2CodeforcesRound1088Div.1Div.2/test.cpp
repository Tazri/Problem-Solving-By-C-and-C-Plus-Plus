#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int p[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    int max = INT_MIN;
    for (int j = 1; j <= 3; j++)
    {
        if (p[j] > max)
        {
            max = j;
        }
    }
    int r = 1;
    for (int i = 1; i <= 3; i++)
    {
        if (i != max)
        {
            r = r * i;
        }
    }

    if (n != 1)
    {
        for (int k = 1; k <= n; k++)
        {
            cout << r << " ";
        }
    }
    else
    {
        cout << "1" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}