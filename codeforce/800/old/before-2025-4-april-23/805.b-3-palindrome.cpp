// link : https://codeforces.com/problemset/problem/805/B
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
        cout << "a" << endl;
        return;
    }

    if (n == 2)
    {
        cout << "aa" << endl;
        return;
    }

    char ch = 'a';
    int time = 0;

    for (int i = 0; i < n; i++)
    {
        cout << ch;
        time++;
        if (time >= 2)
        {
            ch = ch == 'a' ? 'b' : 'a';
            time = 0;
        }
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}