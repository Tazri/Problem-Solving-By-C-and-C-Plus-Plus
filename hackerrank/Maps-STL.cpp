// link : https://www.hackerrank.com/challenges/cpp-maps/problem
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
    int q;
    cin >> q;
    map<string, int> mp;

    while (q--)
    {
        int t;
        string name;
        int mark;
        cin >> t;
        if (t == 1)
        {
            cin >> name >> mark;

            mp[name] += mark;
        }
        else if (t == 2)
        {
            cin >> name;
            if (mp.count(name))
            {
                mp[name] = 0;
            }
        }
        else if (t == 3)
        {
            cin >> name;
            if (mp.count(name))
            {
                cout << mp[name] << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}