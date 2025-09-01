// link : https://codeforces.com/problemset/problem/1873/F
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

int maxLen(vector<int> arr, int k)
{
    int l = 0;
    int r = 0;
    int sum = 0;
    int mx = 0;

    while (r < arr.size())
    {
        if (sum >= k)
        {
            if (sum <= k)
            {
                int len = r - 1 - l + 1;
                mx = max(len, mx);
            }

            sum -= arr[l];
            l++;
        }
        else
        {
            sum += arr[r];
            if (sum <= k)
            {
                int len = r - l + 1;
                mx = max(len, mx);
            }
            r++;
        }
    }

    return mx;
}

void program()
{
    int n, k;
    cin >> n >> k;
    vector<int> app(n);
    vector<int> heights(n);

    for (int i = 0; i < n; i++)
        cin >> app[i];

    for (int i = 0; i < n; i++)
        cin >> heights[i];

    vector<int> temp;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp.empty())
        {
            temp.push_back(app[i]);
            continue;
        }

        if (heights[i - 1] % heights[i] == 0)
        {
            temp.push_back(app[i]);
            continue;
        }

        int len = maxLen(temp, k);

        mx = max(len, mx);
        temp.clear();
        temp.push_back(app[i]);
    }
    int len = maxLen(temp, k);
    mx = max(len, mx);
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