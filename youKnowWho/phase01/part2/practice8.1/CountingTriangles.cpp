#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll k = (n / 2);
        ll u = (n * (n + 1) * (n + 2)) / 6;
        ll a = n + 1;
        ll b = n + 2;
        ll d = ((k * a * b) - ((2 * (a + b) * (k * (k + 1)) / 2)) + (4 * (((k * (k + 1) * ((2 * k) + 1)) / 6)))) / 2;
        cout << u + d << endl;
    }
    return 0;
}