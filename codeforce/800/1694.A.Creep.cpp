// link : https://codeforces.com/problemset/problem/1694/A
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
    int z, o;
    cin >> z >> o;

    if (z >= o)
    {
        while (o > 0)
        {
            cout << "01";
            z--;
            o--;
        }

        z -= o;
        while (z > 0)
        {
            cout << '0';
            z--;
        }
        cout << endl;
        return;
    }

    while (z > 0)
    {
        cout << "10";
        z--;
        o--;
    }

    o -= z;
    while (o)
    {
        cout << '1';
        o--;
    }
    cout << endl;
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