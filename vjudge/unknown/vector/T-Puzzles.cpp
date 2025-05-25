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
    vector<int> p(m);

    for (int i = 0; i < m; i++)
        cin >> p[i];

    sort(p.begin(), p.end());

    int mn = p[n - 1] - p[0];

    for (int i = n, j = 1; i < m; i++, j++)
    {
        mn = min(mn, p[i] - p[j]);
    }

    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}