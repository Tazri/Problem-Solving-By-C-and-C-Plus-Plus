// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
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
    string a, b;
    cin >> a >> b;

    if (a < b)
        cout << a << endl;
    else
        cout << b << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}