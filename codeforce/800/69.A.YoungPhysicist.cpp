// link : https://codeforces.com/problemset/problem/69/A
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

int main()
{
    optimize();
    int x, y, z;

    int sumX = 0;
    int sumY = 0;
    int sumZ = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;

        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if (sumX || sumY || sumZ)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}