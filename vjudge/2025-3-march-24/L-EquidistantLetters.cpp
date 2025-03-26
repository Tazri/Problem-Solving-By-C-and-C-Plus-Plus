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
    vector<int> mp((int)'z' - (int)'a' + 1, 0);
    string s;
    cin >> s;

    for (char ch : s)
    {
        int chi = (int)ch - (int)'a';
        mp[chi]++;
    }

    for (int i = 0; i < (int)'z' - (int)'a' + 1; i++)
    {
        if (!mp[i])
            continue;

        char ch = (char)((int)'a' + i);

        if (mp[i] == 1)
            cout << ch;
        else
            cout << ch << ch;
    }
    cout << endl;
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