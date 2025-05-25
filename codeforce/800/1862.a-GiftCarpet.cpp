// link : https://codeforces.com/problemset/problem/1862/A
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
    vector<string> carpet(n);

    for (int i = 0; i < n; i++)
        cin >> carpet[i];

    if (m < 4)
    {
        cout << "NO" << endl;
        return;
    }

    string name = "vika";

    int fi = 0;
    for (int j = 0; j < m; j++)
    {
        bool isMatch = false;

        for (int i = 0; i < n; i++)
        {
            if (carpet[i][j] == name[fi])
            {
                isMatch = true;
                break;
            }
        }

        if (isMatch)
            fi++;

        if (fi >= name.size())
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
    return;
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