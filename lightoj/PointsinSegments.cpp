// link : https://lightoj.com/problem/points-in-segments
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

int lb(vector<int> &arr, int x)
{
    int n = arr.size();

    if (arr.back() < x)
        return -1;

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (x <= arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return l;
}

int ub(vector<int> &arr, int x)
{
    int n = arr.size();

    if (arr.back() < x)
        return n;

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (x < arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }

    return l;
}

void program(int caseno)
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int &ai : arr)
        cin >> ai;

    cout << "Case " << caseno << ":" << endl;
    while (k--)
    {
        int l, r;
        cin >> l >> r;

        int li = lb(arr, l);
        int ui = ub(arr, r);

        if (li == -1)
        {
            cout << 0 << endl;
            continue;
        }

        ui--;
        int ans = ui - li + 1;
        cout << ans << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}