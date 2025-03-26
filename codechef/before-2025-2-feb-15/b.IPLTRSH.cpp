// link : https://www.codechef.com/problems/IPLTRSH
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

void test()
{
    int n, m;
    cin >> n >> m;

    int left = n - m;

    if (left >= 0)
    {
        cout << left << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}