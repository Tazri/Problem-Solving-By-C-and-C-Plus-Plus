// link : https://www.spoj.com/problems/AGGRCOW/en/
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

bool isPossible(vector<int> &arr, int space, int c)
{
    int prev = arr[0];
    int cnt = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        int diff = arr[i] - prev;

        if (diff >= space)
        {
            cnt++;
            prev = arr[i];
        }
    }

    if (cnt >= c)
        return true;
    return false;
}

void program()
{
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);

    for (int &ai : arr)
        cin >> ai;

    sort(arr.begin(), arr.end());

    int l = 1;
    int r = arr[n - 1] - arr[0];
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (isPossible(arr, mid, c))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
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