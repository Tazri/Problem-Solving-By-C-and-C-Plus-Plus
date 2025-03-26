// link : https://www.codechef.com/problems/CHESS_PAIR
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
    cin >> n >> x;
    int p = n * 2;
    int up = p - x;

    if (up >= x)
    {
        cout << 0 << endl;
        return;
    }
    x -= up;

    cout << x << endl;
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