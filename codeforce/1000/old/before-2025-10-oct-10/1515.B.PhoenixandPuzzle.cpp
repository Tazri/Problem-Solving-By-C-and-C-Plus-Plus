// link : https://codeforces.com/problemset/problem/1515/B
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
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }

    int cnt = 0;

    int cn = n;

    while (cn)
    {
        int b = cn & 1;
        cn >>= 1;
        if (b)
            cnt++;
    }

    if (cnt == 1)
    {
        cout << "YES" << endl;
        return;
    }

    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }

    int size = 2;
    int h = n / 2;
    while (size <= h)
    {
        if (n % size != 0)
        {
            size *= 2;
            continue;
        }

        int ts = n / size;
        int rt = sqrt(ts);

        if (rt * rt == ts)
        {
            cout << "YES" << endl;
            return;
        }

        size *= 2;
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