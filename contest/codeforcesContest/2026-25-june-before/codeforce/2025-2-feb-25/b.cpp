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
    string s;
    cin >> s;

    ll u = 0;
    ll c = 0;

    for (char ch : s)
    {
        if (ch == '-')
        {
            c++;
        }
        else
        {
            u++;
        }
    }

    ll uc = (c / 2) * u;
    ll hc = (c + 1) / 2;

    ll ans = uc * hc;
    cout << ans << endl;
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