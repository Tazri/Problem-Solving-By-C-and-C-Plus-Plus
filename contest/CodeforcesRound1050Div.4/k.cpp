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
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
    }

    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
    }

    cout << n + m << endl;
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