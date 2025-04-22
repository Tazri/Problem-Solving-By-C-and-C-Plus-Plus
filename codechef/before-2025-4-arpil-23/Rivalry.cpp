// link : https://www.codechef.com/problems/CPRIVAL
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
    int r1, r2, d1, d2;
    cin >> r1 >> r2;
    cin >> d1 >> d2;

    r1 += d1;
    r2 += d2;

    if (r1 > r2)
    {
        cout << "Dominater" << endl;
    }
    else if (r1 < r2)
    {
        cout << "Everule" << endl;
    }
    return 0;
}