// linK : https://codeforces.com/edu/course/2/lesson/6/5/practice/contest/285084/problem/C
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

#define int ll

int n, k;
vector<int> a;
vector<int> b;

int getCnt(int x)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int l = 0;
        int r = n - 1;
        int can = -1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (a[i] + b[mid] <= x)
            {
                can = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cnt += can + 1;
    }

    return cnt;
}

void program()
{
    cin >> n >> k;
    a = vector<int>(n);
    b = vector<int>(n);

    for (int &ai : a)
        cin >> ai;
    for (int &bi : b)
        cin >> bi;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int l = 0;
    int r = 2e9 + 123;
    int ans = 0;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int cnt = getCnt(mid);
        if (cnt >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}