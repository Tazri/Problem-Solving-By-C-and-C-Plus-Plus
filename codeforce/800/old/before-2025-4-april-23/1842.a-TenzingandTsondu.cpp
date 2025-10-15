// link : https://codeforces.com/problemset/problem/1842/A
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
    vector<int> tsondu(n);
    vector<int> tenzing(m);

    for (int i = 0; i < n; i++)
        cin >> tsondu[i];

    for (int i = 0; i < m; i++)
        cin >> tenzing[i];

    sort(tsondu.begin(), tsondu.end());
    sort(tenzing.begin(), tenzing.end());

    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (tsondu[i] == tenzing[j])
        {
            i++;
            j++;
        }
        else if (tsondu[i] < tenzing[j])
        {
            tenzing[j] -= tsondu[i];
            i++;
        }
        else if (tenzing[j] < tsondu[i])
        {
            tsondu[i] -= tenzing[j];
            j++;
        }
    }

    if (i >= n && j >= m)
    {
        cout << "Draw" << endl;
    }
    else if (i >= n)
    {
        cout << "Tenzing" << endl;
    }
    else if (j >= m)
    {
        cout << "Tsondu" << endl;
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