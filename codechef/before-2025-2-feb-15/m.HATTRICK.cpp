// link : https://www.codechef.com/problems/HATTRICK
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
    vector<char> balls(6);

    for (int i = 0; i < 6; i++)
        cin >> balls[i];

    for (int i = 2; i < 6; i++)
    {
        if (balls[i] == 'W' && balls[i - 1] == 'W' && balls[i - 2] == 'W')
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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