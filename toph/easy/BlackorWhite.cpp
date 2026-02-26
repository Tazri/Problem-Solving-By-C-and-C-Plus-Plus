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

    int i = (int)a.back() - (int)'0';
    int j = (int)b.back() - (int)'0';

    if ((i + j) & 1)
    {
        cout << "White" << endl;
    }
    else
    {
        cout << "Black" << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}