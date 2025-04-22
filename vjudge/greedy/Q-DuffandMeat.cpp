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
    int n;
    cin >> n;
    int ans = 0;
    int price, meat;
    cin >> meat >> price;

    for (int i = 1; i < n; i++)
    {
        int m, p;
        cin >> m >> p;

        if (price > p)
        {
            ans += (meat * price);
            price = p;
            meat = m;
        }
        else
        {
            meat += m;
        }
    }

    ans += (meat * price);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}