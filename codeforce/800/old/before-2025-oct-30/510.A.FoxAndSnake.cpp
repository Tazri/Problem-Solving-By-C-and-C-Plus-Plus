// link : https://codeforces.com/problemset/problem/510/A
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
    string full(m, '#');
    string right(m, '.');
    string left(m, '.');
    right.back() = '#';
    left.front() = '#';

    bool isRight = true;

    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << full << endl;
            continue;
        }

        if (isRight)
            cout << right << endl;
        else
            cout << left << endl;
        isRight = !isRight;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}