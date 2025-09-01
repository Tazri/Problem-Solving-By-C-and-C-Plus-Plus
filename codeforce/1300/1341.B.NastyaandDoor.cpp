// link : https://codeforces.com/problemset/problem/1341/B
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

void program()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int &vi : v)
        cin >> vi;

    int lk = k - 1;

    int peak = 0;

    for (int i = 1; i < lk; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
            peak++;
    }

    int ans = peak;
    int left = 0;

    for (int l = 1, r = k - 1; r < n - 1; r++, l++)
    {
        if (v[l] > v[l - 1] && v[l] > v[l + 1])
            peak--;

        if (v[r] > v[r + 1] && v[r] > v[r - 1])
            peak++;

        if (peak > ans)
        {
            ans = peak;
            left = l;
        }
    }

    cout << ans + 1 << " " << left + 1 << endl;
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