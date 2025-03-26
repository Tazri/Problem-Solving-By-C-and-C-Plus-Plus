// link : https://www.codechef.com/problems/PHONEYR
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
    char y[4];
    cin >> y[0] >> y[1] >> y[2] >> y[3];

    cout << "K" << y[2] << y[3] << endl;
    return 0;
}