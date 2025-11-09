// link : https://codeforces.com/problemset/problem/577/A
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
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int t = 1; t * t <= x && t <= n; t++)
    {
        if (x % t != 0)
            continue;

        int i = t;
        int j = x / t;

        if (1 <= i && i <= n && 1 <= j && j <= n)
        {
            if (i != j)
                cnt += 2;
            else
                cnt++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}