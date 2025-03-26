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

    if (n & 1)
    {
        cout << 1;
        for (int i = 0; i < n - 1; i++)
            cout << " " << 1;
        cout << endl;
        return;
    }

    cout << 1 << " " << 3;

    for (int i = 0; i < n - 2; i++)
        cout << " " << 2;
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