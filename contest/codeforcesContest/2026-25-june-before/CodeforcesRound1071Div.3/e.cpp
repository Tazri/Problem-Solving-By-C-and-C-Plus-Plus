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
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n);
    string s;
    cin >> s;
    int req = 0;
    for (int &vi : v)
    {
        cin >> vi;
        req += vi - 1;
    }
    int aCnt = 0;
    int bCnt = 0;
    for (char ch : s)
        if (ch == '0')
            aCnt++;
        else
            bCnt++;

    int a = x;
    int b = y;
    a -= aCnt;
    b -= bCnt;

    if (a < 0 || b < 0)
    {
        cout << "NO" << endl;
        return;
    }

    if (aCnt && bCnt)
    {
        if (req <= a + b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return;
    }

    if (bCnt)
    {
        if (a)
        {
            if (aCnt)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            return;
        }
        cout << "YES" << endl;
        return;
    }

    if (aCnt)
    {
        if (b)
        {
            if (a)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            return;
        }
        cout << "YES" << endl;
        return;
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