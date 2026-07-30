// link : https://codeforces.com/problemset/problem/2126/D
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

struct Casino
{
    int l, r, real;
};

void program()
{
    int n, k;
    cin >> n >> k;

    vector<Casino> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i].l >> arr[i].r >> arr[i].real;

    // sort it
    sort(arr.begin(), arr.end(), [](Casino left, Casino right)
         { return left.l < right.l; });

    int pos = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].l <= k && k <= arr[i].r)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << k << endl;
        return;
    }

    int mx = k;
    for (int i = pos; i < n; i++)
    {
        if (arr[i].l <= mx && mx <= arr[i].r)
        {
            mx = max(mx, arr[i].real);
        }
    }

    cout << mx << endl;
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