// https://codeforces.com/problemset/problem/443/A
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

int main()
{
    optimize();
    set<char> s;

    char ch;
    ch = '\0';
    while (ch != '}')
    {
        cin >> ch;
        // if is english letter
        if (((int)ch) >= ((int)'a') && ((int)ch) <= ((int)'z'))
        {
            s.insert(ch);
        }
    }

    cout << s.size() << endl;
    return 0;
}