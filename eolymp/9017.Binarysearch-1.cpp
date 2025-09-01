
// link : https://basecamp.eolymp.com/en/problems/9017
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
    int l = 0;
    int r = arr.size();
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (x <= arr[mid])
        {
            r = mid - 1;
            if (arr[mid] == x)
                ans = mid;
        }
        else
            l = mid + 1;
    }

    return ans;
}

int ub(vector<int> &arr, int x)
{
    int l = 0;
    int r = arr.size();
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (x < arr[mid])
            r = mid - 1;
        else
        {

            l = mid + 1;
            if (arr[mid] == x)
                ans = mid;
        }
    }

    return ans;
}

void program()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int &ai : arr)
        cin >> ai;

    while (q--)
    {
        int x;
        cin >> x;
        int l = lb(arr, x);
        int u = ub(arr, x);

        if (l == -1)
        {
            cout << 0 << endl;
            continue;
        }

        cout << u - l + 1 << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}