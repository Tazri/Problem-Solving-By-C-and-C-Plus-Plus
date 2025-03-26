// link : https://www.codechef.com/problems/SPCP2
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
    int n, x;

    cin >> x >> n;

    n -= (x * 100);

    if (n <= 0)
    {
        cout << 0 << endl;
        return;
    }

    int need = (n + 99) / 100;
    cout << need << endl;
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