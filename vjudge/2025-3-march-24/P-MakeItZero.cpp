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
    vector<int> arr(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        x ^= ai;
    }

    if (x == 0)
    {
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
        return;
    }

    if (n & 1)
    {
        cout << 4 << endl;
        cout << 1 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << 2 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
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