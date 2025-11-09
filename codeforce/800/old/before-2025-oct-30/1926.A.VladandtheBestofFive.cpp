// link : https://codeforces.com/problemset/problem/1926/A
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

    int a = 0;
    int b = 0;

    for (char ch : s)
        if (ch == 'A')
            a++;
        else
            b++;

    if (a > b)
        cout << "A" << endl;
    else
        cout << "B" << endl;
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