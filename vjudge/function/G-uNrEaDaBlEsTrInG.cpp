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
    string s;
    cin >> s;

    bool isHardToRead = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (!isHardToRead)
            continue;

        if (i & 1)
        {
            if (s[i] == tolower(s[i]))
            {
                isHardToRead = false;
                break;
            }
        }
        else
        {
            if (s[i] == toupper(s[i]))
            {
                isHardToRead = false;
                break;
            }
        }
    }

    if (isHardToRead)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}