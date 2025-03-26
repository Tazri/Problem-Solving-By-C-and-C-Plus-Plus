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

    if (n <= 1)
    {
        cout << 1 << endl;
        return;
    }

    cout << 1 << endl;
    n--;
    int mid = 0;

    for (int i = 0; i < n; i++)
    {
        cout << 1;
        for (int t = 0; t < mid; t++)
        {
            cout << " " << 0;
        }
        cout << " " << 1 << endl;
        mid++;
    }
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