// link : https://codeforces.com/problemset/problem/1793/C
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }

    int l = 0;
    int r = n - 1;
    int mn = 1;
    int mx = n;
    while (l < r)
    {
        if (v[l] == mn || v[l] == mx)
        {
            if (v[l] == mn)
                mn++;
            else
                mx--;
            l++;
        }
        else if (v[r] == mn || v[r] == mx)
        {
            if (v[r] == mn)
                mn++;
            else
                mx--;
            r--;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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