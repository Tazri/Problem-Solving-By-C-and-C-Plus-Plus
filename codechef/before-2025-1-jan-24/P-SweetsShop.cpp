// link : https://www.codechef.com/problems/SWEETSHOP
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
    int x, n;
    cin >> x >> n;
    x -= (n * 10);

    int ans = x / 20;
    cout << ans << endl;
    return 0;
}