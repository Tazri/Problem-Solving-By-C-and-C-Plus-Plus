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
    int n, x, t;
    cin >> n >> x >> t;

    int need = (n + x - 1) / x;

    int ans = need * t;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}