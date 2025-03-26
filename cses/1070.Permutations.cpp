// link : https://cses.fi/problemset/task/1070
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

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n <= 3)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    cout << 2;
    for (int i = 4; i <= n; i += 2)
        cout << " " << i;

    for (int i = 1; i <= n; i += 2)
        cout << " " << i;
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}