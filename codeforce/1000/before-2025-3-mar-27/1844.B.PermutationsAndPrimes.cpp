// link : https://codeforces.com/problemset/problem/1844/B
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
        cout << 1 << endl;
        return;
    }

    if (n == 2)
    {
        cout << "1 2" << endl;
        return;
    }

    if (n == 3)
    {
        cout << "3 1 2" << endl;
        return;
    }

    int left = n - 3;
    int lh = (left + 1) / 2;
    int rh = left / 2;

    int ni = 4;

    cout << 3;
    for (int i = 0; i < lh; i++)
        cout << " " << ni++;

    cout << " " << 1;

    for (int i = 0; i < rh; i++)
        cout << " " << ni++;
    cout << " " << 2;

    cout << endl;
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