// link : https://codeforces.com/problemset/problem/1807/E
#include <bits/stdc++.h>

using namespace std;

vector<int> v;
vector<int> pre;

int query(int l, int r)
{
    cout << "? " << r - l + 1 << " ";
    cout.flush();
    for (int i = l; i <= r; i++)
    {
        cout << i << " \n"[i == r];
    }
    cout.flush();

    int ans;
    cin >> ans;
    return ans;
}

void program()
{
    int n;
    cin >> n;
    v = vector<int>(n + 1);
    pre = vector<int>(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pre[i] = v[i];
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] += pre[i - 1];
    }

    int l = 1;
    int r = n;

    while (l < r)
    {
        int mid = (l + r) / 2;
        int leftWeight = query(l, mid);

        int leftShould = pre[mid] - pre[l - 1];

        if (leftWeight > leftShould)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "! " << l << endl;
}

int32_t main()
{
    // optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}