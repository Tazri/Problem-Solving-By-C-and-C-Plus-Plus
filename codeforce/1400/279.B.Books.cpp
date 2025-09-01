// link : https://codeforces.com/problemset/problem/279/B
#include <bits/stdc++.h>
using namespace std;

void program()
{
    int n, t;
    cin >> n >> t;
    vector<int> arr(n);

    for (int &ai : arr)
        cin >> ai;

    int sum = 0;
    int cnt = 0;
    int mx = 0;
    int l = -1;

    for (int i = 0; i < n; i++)
    {
        int ai = arr[i];

        if (ai > t)
        {
            mx = max(cnt, mx);
            cnt = 0;
            sum = 0;
            l = -1;
            continue;
        }

        if (l == -1)
        {
            l = i;
        }

        sum += ai;
        cnt++;

        if (sum <= t)
        {
            mx = max(mx, cnt);
            continue;
        }

        while (sum > t)
        {
            sum -= arr[l++];
            cnt--;
        }

        mx = max(mx, cnt);
    }

    cout << mx << endl;
}

int main()
{
    program();
    return 0;
}