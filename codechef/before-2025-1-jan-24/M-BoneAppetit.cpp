// link : https://www.codechef.com/problems/BNE_APT
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
    int n, m;
    cin >> n >> m;
    int x, y;
    cin >> x >> y;
    int ans = (n * x) + (m * y);
    cout << ans << endl;
    return 0;
}