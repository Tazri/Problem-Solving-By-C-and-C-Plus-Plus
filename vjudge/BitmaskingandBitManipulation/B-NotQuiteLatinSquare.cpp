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
    char ans = 'A';
    for (int i = 0; i < 3; i++)
    {
        char a, b, c;
        cin >> a >> b >> c;
        bool ba = false, bc = false, bb = false;

        if (a == 'A' || b == 'A' || c == 'A')
            ba = true;
        if (a == 'B' || b == 'B' || c == 'B')
            bb = true;
        if (a == 'C' || b == 'C' || c == 'C')
            bc = true;

        if (a == '?' || b == '?' || c == '?')
        {
            if (ba && bb)
                ans = 'C';
            else if (ba && bc)
                ans = 'B';
        }
    }

    cout << ans << endl;
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