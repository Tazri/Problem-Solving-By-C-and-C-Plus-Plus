// link : https://codeforces.com/contest/141/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    string a, b, c;
    cin >> a >> b >> c;
    vector<int> mp((int)'Z' - (int)'A' + 1, 0);

    for (char ch : a)
        mp[(int)ch - (int)'A']++;

    for (char ch : b)
        mp[(int)ch - (int)'A']++;

    for (char ch : c)
        mp[(int)ch - (int)'A']--;

    for (int mi : mp)
    {
        if (mi != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    return;
}

int main()
{
    optimize();

    program();

    return 0;
}