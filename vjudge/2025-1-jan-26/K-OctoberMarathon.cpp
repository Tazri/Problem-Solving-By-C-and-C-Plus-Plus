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

    if (x < 3)
        cout << "GOLD" << endl;
    else if (x < 6)
        cout << "SILVER" << endl;
    else
        cout << "BRONZE" << endl;
    return 0;
}