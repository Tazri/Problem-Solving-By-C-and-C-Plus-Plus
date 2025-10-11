// link : https://codeforces.com/problemset/problem/1133/A
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

void take(string time, int &h, int &m)
{
    h = 0;

    h += ((int)time[1] - (int)'0');
    h += ((int)time[0] - (int)'0') * 10;

    m = 0;

    m += ((int)time[3] - (int)'0') * 10;
    m += ((int)time[4] - (int)'0');
}

void program()
{
    int sh, sm, eh, em;
    string start, end;
    cin >> start;
    cin >> end;

    take(start, sh, sm);
    take(end, eh, em);

    int total = 0;
    int dh = eh - sh;
    total += (dh * 60);

    if (sh == eh)
    {
        total += (em - sm);
    }
    else
    {
        total -= sm;
        total += em;
    }

    int half = total / 2;
    int ah = half / 60;
    int am = half % 60;
    sh += ah;
    sm += am;

    if (sm >= 60)
    {
        sh++;
        sm -= 60;
    }

    if (sh < 10)
        cout << "0" << sh;
    else
        cout << sh;
    cout << ":";
    if (sm < 10)
        cout << "0" << sm;
    else
        cout << sm;
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}