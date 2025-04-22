// link : https://codeforces.com/problemset/problem/1133/C
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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int mx = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int left = (n - 1) - i + 1;
        if (left < mx)
            break;

        int l = i + 1;
        int r = n - 1;
        int index = -1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            int d = arr[mid] - arr[i];

            if (d > 5)
            {
                r = mid - 1;
                continue;
            }

            index = mid;
            l = mid + 1;
        }

        if (index == -1)
            continue;

        int cnt = index - i + 1;
        mx = max(cnt, mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}