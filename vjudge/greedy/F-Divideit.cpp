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
    ll take = 0;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            take++;
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            take += 2;
            n /= 3;
        }
        else if (n % 5 == 0)
        {
            take += 3;
            n /= 5;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << take << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}