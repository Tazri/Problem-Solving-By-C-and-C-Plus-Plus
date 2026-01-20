// link : https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B
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
vector<int> v;

bool isPossible(int limit)
{
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (limit < v[i])
            return false;

        if (sum + v[i] > limit)
        {
            cnt++;
            sum = v[i];
        }
        else
        {
            sum += v[i];
        }
    }

    if (sum)
        cnt++;

    return cnt <= k;
}

void program()
{
    cin >> n >> k;
    v = vector<int>(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 0;
    int r = 1e15;
    int ans = r;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (isPossible(mid))
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