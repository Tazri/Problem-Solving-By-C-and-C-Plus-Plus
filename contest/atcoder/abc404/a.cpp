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
    vector<bool> mp((int)'z' + (int)'a' + 1, false);
    string s;
    cin >> s;

    for (char ch : s)
    {
        int chi = (int)ch - (int)'a';
        mp[chi] = true;
    }

    for (int i = 0; i < mp.size(); i++)
    {
        if (!mp[i])
        {
            char ch = (char)((int)'a' + i);
            cout << ch << endl;
            return;
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}