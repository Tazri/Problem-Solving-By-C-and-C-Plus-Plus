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
    int n, kr, kc, dr, dc;
    cin >> n >> kr >> kc >> dr >> dc;

    int topLeft = max(abs(dc), abs(dr));
    int topRight = max(abs(dc - n), abs(dr));
    int bottomLeft = max(abs(dc), abs(dr - n));
    int bottomRight = max(abs(dc - n), abs(dr - n));

    // cout << topLeft << " " << topRight << " " << bottomLeft << " " << bottomRight << endl;
    if (kr == dr)
    { // if in same row
        if (dc < kc)
            cout << n - dc << endl;
        else
            cout << dc << endl;
        return;
    }

    if (kc == dc)
    {
        if (kr > dr)
            cout << n - dr << endl;
        else
            cout << dr << endl;
        return;
    }

    if (dc < kc && dr < kr)
        cout << bottomRight << endl;
    else if (dc > kc && dr < kr)
        cout << bottomLeft << endl;
    else if (dc > kc && dr > kr)
        cout << topLeft << endl;
    else
        cout << topRight << endl;
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