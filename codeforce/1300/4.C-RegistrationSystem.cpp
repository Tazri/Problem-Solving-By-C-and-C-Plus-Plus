// link : https://codeforces.com/problemset/problem/4/C
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
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        if (mp.count(name))
        {
            string newName = name + to_string(mp[name]);
            cout << newName << endl;
        }
        else
        {
            cout << "OK" << endl;
        }

        mp[name]++;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}