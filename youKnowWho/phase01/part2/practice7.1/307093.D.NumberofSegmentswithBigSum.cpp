// link : https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D
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

void program()
{
    int n, s;
    cin >> n >> s;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = 0;
    int l = 0;
    int r = 0;
    int cnt = 0;
    while (l < n)
    {
        while (r < n && sum + v[r] < s)
        {
            sum += v[r];
            r++;
        }

        if (r >= n)
        {
            l++;
            continue;
        }

        sum += v[r];

        int left = r;
        int right = n - 1;
        int len = right - left + 1;
        cnt += len;
        sum -= v[r];
        sum -= v[l];
        l++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}