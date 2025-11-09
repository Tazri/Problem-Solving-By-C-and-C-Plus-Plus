// link : https://codeforces.com/problemset/problem/1097/A
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
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        string card;
        cin >> card;

        if (card[0] == s[0] || card[1] == s[1])
            found = true;
    }

    if (found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}