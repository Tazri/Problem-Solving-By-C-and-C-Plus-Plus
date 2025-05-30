// link :https://www.codechef.com/problems/NUGGET
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
    int x, y;
    cin >> x >> y;
    int ans = (x * 5000) + (y * 9800);
    cout << ans << endl;
    return 0;
}