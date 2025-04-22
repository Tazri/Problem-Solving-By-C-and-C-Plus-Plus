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
    map<int, bool> mp;

    int need = 0;

    for (int i = 0; i < 4; i++)
    {
        int c;
        cin >> c;

        if (!mp.count(c))
            mp[c] = true;
        else
            need++;
    }

    cout << need << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}