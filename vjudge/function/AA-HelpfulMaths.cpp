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
    string s;
    cin >> s;
    int o = 0;
    int tw = 0;
    int th = 0;

    for (char ch : s)
    {
        if (ch == '1')
            o++;
        else if (ch == '2')
            tw++;
        else if (ch == '3')
            th++;
    }

    bool isFirst = false;

    if (o && !isFirst)
    {
        cout << 1;
        o--;
        isFirst = true;
    }

    if (tw && !isFirst)
    {
        cout << 2;
        tw--;
        isFirst = true;
    }

    if (th && !isFirst)
    {
        cout << 3;
        th--;
        isFirst = true;
    }

    for (int i = 0; i < o; i++)
        cout << "+" << 1;

    for (int i = 0; i < tw; i++)
        cout << "+" << 2;

    for (int i = 0; i < th; i++)
        cout << "+" << 3;

    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}