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
        cout << 0 << endl;
        return;
    }

    if (n == 2)
    {
        cout << 0 << " " << 1;
        return;
    }

    int prev = 0;
    int curr = 1;

    cout << 0 << " " << 1;

    for (int i = 0; i < n - 2; i++)
    {
        cout << " " << prev + curr;
        int newEl = prev + curr;
        prev = curr;
        curr = newEl;
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}