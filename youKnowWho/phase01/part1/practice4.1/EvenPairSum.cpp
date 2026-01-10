// link : https://vjudge.net/problem/codechef-evenpsum
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

#define int ll

void program()
{
    int a, b;
    cin >> a >> b;

    int aodd = (a + 1) / 2;
    int aeven = a / 2;
    int bodd = (b + 1) / 2;
    int beven = b / 2;

    cout << (aodd * bodd) + (aeven * beven) << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}