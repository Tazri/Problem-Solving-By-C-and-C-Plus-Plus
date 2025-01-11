// link : https://codeforces.com/problemset/problem/1066/B
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

int getNext(int i, int r, int n)
{
    int last = n - 1;
    int next = i + r - 1 + 1;
    return next;
}

int getLeft(int i, int r)
{
    int left = i - r + 1;
    if (left < 0)
    {
        left = 0;
    }
    return left;
}

int getRight(int i, int r, int n)
{
    int last = n - 1;
    int right = i + r - 1;

    if (right > last)
    {
        right = last;
    }
    return right;
}

int main()
{
    optimize();
    int n, r;
    cin >> n >> r;
    int ans = 0;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
    while (i < n)
    {
        int right = getRight(i, r, n);

        // look furthest
        int findIndex = -1;
        for (int ri = right; ri > i; ri--)
        {
            if (arr[ri])
            {
                findIndex = ri;
                break;
            }
        }
        // if found
        if (findIndex != -1)
        {
            ans++;
            int next = getNext(findIndex, r, n);
            i = next;
            continue;
        }

        // if not found the look at the left
        int left = getLeft(i, r);
        for (int li = i; left <= li; li--)
        {
            if (arr[li])
            {
                findIndex = li;
                break;
            }
        }

        if (findIndex != -1)
        {
            ans++;
            int next = getNext(findIndex, r, n);
            i = next;
            continue;
        }

        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;
    return 0;
}