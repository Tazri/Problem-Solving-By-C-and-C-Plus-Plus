// link : https://lightoj.com/problem/triangle-partitioning
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

void program(int caseno)
{
    double ab, ac, bc, r;
    cin >> ab >> ac >> bc >> r;

    double ans = sqrt(r / (r + 1)) * ab;

    cout << "Case " << caseno << ": " << ans << endl;
}

int main()
{
    optimize();
    fraction();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}