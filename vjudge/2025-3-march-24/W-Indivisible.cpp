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

    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }

    if (n == 2)
    {
        cout << "1 2" << endl;
        return;
    }

    cout << "2 1";

    int p = 3;
    n -= 2;
    int h = n / 2;

    for (int i = 0; i < h; i++)
    {
        int a = p;
        int b = p + 1;
        cout << " " << b << " " << a;
        p += 2;
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