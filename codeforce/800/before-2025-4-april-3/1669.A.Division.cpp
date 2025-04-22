// link : https://codeforces.com/problemset/problem/1669/A
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
    int r;
    cin >> r;

    if (r <= 1399)
    {
        cout << "Division 4" << endl;
    }
    else if (r >= 1400 && r <= 1599)
    {
        cout << "Division 3" << endl;
    }
    else if (r >= 1600 && r <= 1899)
    {
        cout << "Division 2" << endl;
    }
    else
    {
        cout << "Division 1" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        program();
    }
    return 0;
}