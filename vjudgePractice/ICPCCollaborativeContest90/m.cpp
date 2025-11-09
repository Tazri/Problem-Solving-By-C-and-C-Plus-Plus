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
    int n, m;
    cin >> n >> m;
    vector<int> c(n);
    vector<int> d(m);

    for (int &ci : c)
        cin >> ci;
    for (int &di : d)
        cin >> di;

    sort(c.begin(), c.end());
    sort(d.begin(), d.end());

    if (n > m)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (d[i] >= c[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}