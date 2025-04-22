// link : https://www.codechef.com/problems/MVR
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
    int a, b;
    int x, y;
    cin >> a >> b >> x >> y;

    int m = (a * 2) + b;
    int r = (x * 2) + y;

    if (m > r)
    {
        cout << "Messi" << endl;
    }
    else if (m < r)
    {
        cout << "Ronaldo" << endl;
    }
    else
        cout << "Equal" << endl;
    return 0;
}