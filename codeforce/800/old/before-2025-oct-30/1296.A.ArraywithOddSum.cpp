// link : https://codeforces.com/problemset/problem/1296/A
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
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;

        if (ai & 1)
            odd++;
        else
            even++;
    }

    if (odd && even)
    {
        cout << "YES" << endl;
        return;
    }

    if (even)
    {
        cout << "NO" << endl;
        return;
    }

    if (odd & 1)
        cout << "YES" << endl;
    else
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