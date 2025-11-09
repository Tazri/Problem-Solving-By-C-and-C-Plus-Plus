// link : https://codeforces.com/problemset/problem/1845/A
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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;

        for (int i = 1; i <= n; i++)
            cout << 1 << " \n"[i == n];
        return;
    }

    if (k >= 3)
    {
        cout << "YES" << endl;
        vector<int> ans;
        if (n & 1)
        {
            ans.push_back(3);
            n -= 3;
        }

        while (n)
        {
            ans.push_back(2);
            n -= 2;
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " \n"[i == ans.size() - 1];
        return;
    }

    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (k == 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    vector<int> ans;
    while (n)
    {
        ans.push_back(2);
        n -= 2;
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
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