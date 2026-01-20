// link:  https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C
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

int n, k;
vector<int> v;

bool ok(int d)
{
    int cows = k - 1;
    int prev = 0;

    for (int i = 1; i < n; i++)
    {
        if (cows <= 0)
            break;

        int distance = v[i] - v[prev];

        if (distance >= d)
        {
            prev = i;
            cows--;
        }
    }

    return cows <= 0;
}

void program()
{
    cin >> n >> k;
    v = vector<int>(n);

    for (int &vi : v)
        cin >> vi;

    int l = 0;
    int r = 1e9;
    int ans = 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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