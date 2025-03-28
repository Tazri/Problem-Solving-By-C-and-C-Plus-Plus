// link : https://codeforces.com/problemset/problem/1907/B
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
    vector<int> ui; // lowercase track
    vector<int> li; // uppercase track
    vector<bool> mp(s.size(), true);

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if (ch != 'b' && ch != 'B')
        {
            if (tolower(ch) == ch)
            {
                li.push_back(i);
            }

            if (toupper(ch) == ch)
            {
                ui.push_back(i);
            }
        }

        if (ch == 'b')
        {
            mp[i] = false;
            if (li.size())
            {
                int di = li.back();
                li.pop_back();
                mp[di] = false;
            }
        }

        if (ch == 'B')
        {
            mp[i] = false;
            if (ui.size())
            {
                int di = ui.back();
                ui.pop_back();
                mp[di] = false;
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
        if (mp[i])
            cout << s[i];
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