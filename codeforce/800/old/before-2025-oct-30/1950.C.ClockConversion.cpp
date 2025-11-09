// link : https://codeforces.com/problemset/problem/1950/C
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
    int ld = (int)s[0] - (int)'0';
    int rd = (int)s[1] - (int)'0';
    int h = ld * 10 + rd;

    bool isAm = h < 12;

    if (h > 12)
        h -= 12;

    if (h == 0)
        cout << "12";
    else if (h < 10)
        cout << 0 << h;
    else
        cout << h;
    for (int i = 2; i < s.size(); i++)
        cout << s[i];
    cout << " ";

    if (isAm)
        cout << "AM" << endl;
    else
        cout << "PM" << endl;
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