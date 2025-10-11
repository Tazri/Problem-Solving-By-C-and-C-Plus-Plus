// link : https://codeforces.com/problemset/problem/1634/C
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

bool isValid(int e, int en, int o, int on, int k)
{
    if (o % on != 0)
        return false;
    if (o / on != k)
        return false;

    if (e == 0)
        return true;

    if (e % en != 0)
        return false;
    if (e / en != k)
        return false;

    return true;
}

void program()
{
    int n, k;

    cin >> n >> k;
    int nk = n * k;

    int e = nk / 2;
    int o = (nk + 1) / 2;
    int on = (n + 1) / 2;
    int en = n - on;

    if (!isValid(e, en, o, on, k))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    int ai = 1;

    for (int i = 0; i < on; i++)
    {
        cout << ai;
        ai += 2;

        for (int j = 1; j < k; j++)
        {
            cout << " " << ai;
            ai += 2;
        }
        cout << endl;
    }

    ai = 2;
    for (int i = 0; i < en; i++)
    {
        cout << ai;
        ai += 2;

        for (int j = 1; j < k; j++)
        {
            cout << " " << ai;
            ai += 2;
        }
        cout << endl;
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