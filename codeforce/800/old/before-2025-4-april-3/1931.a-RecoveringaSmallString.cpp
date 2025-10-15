// link : https://codeforces.com/problemset/problem/1931/A
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
    string s(3, '*');

    vector<int> dig = {26, 26, 26};

    int mx = 78;
    int diff = mx - n;
    int i = 0;

    while (diff > 0)
    {
        if (i >= 3)
            break;

        if (diff >= 26)
        {
            dig[i] -= 25;
            i++;
            diff -= 25;
            continue;
        }
        else
        {
            dig[i] -= diff;
            diff = 0;
        }
    }

    // construct
    for (int i = 0; i < dig.size(); i++)
    {
        char ch = (char)((int)'a' + dig[i] - 1);
        s[i] = ch;
    }

    cout << s << endl;
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