// link : https://codeforces.com/problemset/problem/363/A
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
    vector<string> mp = {
        "O-|-OOOO",
        "O-|O-OOO",
        "O-|OO-OO",
        "O-|OOO-O",
        "O-|OOOO-",
        "-O|-OOOO",
        "-O|O-OOO",
        "-O|OO-OO",
        "-O|OOO-O",
        "-O|OOOO-",
    };

    int n;
    cin >> n;

    if (n == 0)
    {
        cout << mp[0] << endl;
        return;
    }

    while (n)
    {
        cout << mp[n % 10] << endl;
        n /= 10;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}