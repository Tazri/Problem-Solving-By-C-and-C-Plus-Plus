// link : https://codeforces.com/problemset/problem/489/C
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

void calmn(vector<int> &v)
{
    reverse(v.begin(), v.end());
    int n = v.size();
    int l = 0;
    int r = n - 1;

    while (l < r)
    {
        int sum = v[l] + v[r];
        int rv, lv;
        if (sum <= 9)
        {
            rv = sum;
            lv = 0;
        }
        else
        {
            rv = 9;
            lv = sum - 9;
        }

        v[l] = lv;
        v[r] = rv;

        if (v[l] == 0)
            l++;
        if (v[r] == 9)
            r--;
    }

    vector<int> mxv = v;
    reverse(mxv.begin(), mxv.end());

    if (v[0] == 0)
    {
        for (int i = 1; i < n; i++)
            if (v[i] != 0)
            {
                v[0] = 1;
                v[i]--;
                break;
            }
    }

    for (int vi : v)
        cout << vi;
    cout << " ";

    for (int vi : mxv)
        cout << vi;
    cout << endl;
}

void program()
{
    int m, sum;
    cin >> m >> sum;

    int mx = m * 9;
    int mn = 1;

    if (m == 1 && sum == 0)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
    if (sum < mn || sum > mx)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }

    vector<int> v(m);
    int avg = sum / m;
    int left = sum % m;

    for (int i = 0; i < m; i++)
        v[i] = avg;

    for (int i = 0; i < left; i++)
        v[i]++;
    calmn(v);
}

int main()
{
    optimize();
    program();
    return 0;
}