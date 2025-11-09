// link : https://codeforces.com/problemset/problem/1834/A
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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    int m1 = 0;
    int p1 = 0;

    for (int &vi : v)
        if (vi < 0)
            m1++;
        else
            p1++;

    int rm = 0;

    if (m1 > p1)
    {
        rm += m1 - (n / 2);
        m1 -= rm;
    }

    if (m1 & 1)
        rm++;
    cout << rm << endl;
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