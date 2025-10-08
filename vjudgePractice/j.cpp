#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, q, size, count = 0;
    cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector<int> s, e;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for (int i = a; i <= b; i++)
            s.push_back(arr[i]);
        for (int i = c; i <= d; i++)
            e.push_back(arr[i]);

        sort(s.begin(), s.end());
        sort(e.begin(), e.end());

        size = s.size();

        for (int i = 0; i < size; i++)
        {
            if (s[i] != e[i])
            {
                count++;
            }
        }
        if (count <= 1)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }

        s.clear();
        e.clear();
        count = 0;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}