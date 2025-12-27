// link : https://toph.co/p/clock-math
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
    dl h, m;
    cin >> h >> m;

    dl mnAngle = m * 6;
    dl hrAngle = (h * 30) + (0.5 * m);
    dl df = abs(hrAngle - mnAngle);

    if (df > 180)
        cout << 360 - df << endl;
    else
        cout << df << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}