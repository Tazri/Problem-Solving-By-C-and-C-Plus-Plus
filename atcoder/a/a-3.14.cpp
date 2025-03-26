// link : https://atcoder.jp/contests/abc314/tasks/abc314_a?lang=en
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
    string pi = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

    cout << "3.";

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << pi[i];
    }
    cout << endl;
    return 0;
}