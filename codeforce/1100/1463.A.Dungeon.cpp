// link : https://codeforces.com/problemset/problem/1463/A
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

int apply(int a, int b, int c, int n)
{
    int d = n / 7;
    n -= d;

    if (d <= 0)
        return 1; // need more n

    a -= d;
    b -= d;
    c -= d;
    int sum = a + b + c;

    if (sum > n)
    {
        return 1; // need more n
    }

    if (sum < n)
    {
        return -1; // please give less n
    }

    if (a < 0 || b < 0 || c < 0)
    {
        return -1;
    }

    return 0;
}

void program()
{
    int a, b, c;
    cin >> a >> b >> c;

    int l = 1;
    int r = a + b + c;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int mod = mid % 7;
        int m1 = mid - mod;
        int m2 = mid + (7 - mod);

        int r1 = apply(a, b, c, m1);
        int r2 = apply(a, b, c, m2);

        if (r1 == 0 || r2 == 0)
        {
            cout << "YES" << endl;
            return;
        }

        if (r1 == -1 && r2 == -1)
            r = mid - 1;
        else if (r2 == 1 && r2 == 1)
            l = mid + 1;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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