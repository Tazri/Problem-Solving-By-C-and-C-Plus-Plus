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
    cout.precision(6);            \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    double n;
    cin >> n;
    cout << "Please enter any number: ";

    if (n < 0)
    {
        cout << "Accept positive number only!" << endl;
        return;
    }

    double ans = sqrt(n);

    cout << "Square root of " << n << " is " << ans << endl;
}

int main()
{
    optimize();
    fraction();
    program();
    return 0;
}