// link : https://www.codechef.com/problems/NEWCC
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
    int x, y;

    cin >> x >> y;

    if (x < y)
    {
        cout << "Old" << endl;
    }
    else if (x > y)
    {
        cout << "New" << endl;
    }
    else
    {
        cout << "Same" << endl;
    }
    return 0;
}