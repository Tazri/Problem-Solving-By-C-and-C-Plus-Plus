// link : https://www.codechef.com/problems/NEWSPAPER
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
    int x;
    cin >> x;

    if (x > 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}