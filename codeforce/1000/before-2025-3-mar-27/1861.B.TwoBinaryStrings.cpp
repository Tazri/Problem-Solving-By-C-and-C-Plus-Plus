// link : https://codeforces.com/problemset/problem/1861/B
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
    string a, b;
    cin >> a;
    cin >> b;

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == '0' && b[i] == '0')
        {
            // check next
            if (a[i + 1] == '1' && b[i + 1] == '1')
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
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