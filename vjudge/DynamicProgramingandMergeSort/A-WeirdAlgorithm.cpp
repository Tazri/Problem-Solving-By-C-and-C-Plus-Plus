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
    ll n;
    cin >> n;

    cout << n;

    while (n > 1)
    {
        if (n & 1)
            n = (n * 3) + 1;
        else
            n /= 2;

        cout << " " << n;
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}