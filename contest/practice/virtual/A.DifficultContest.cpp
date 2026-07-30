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

    int cnt = 0;
    for (char &ch : s)
        if (ch == 'T')
            cnt++;

    for (int i = 0; i < cnt; i++)
        cout << 'T';
    for (char &ch : s)
        if (ch != 'T')
            cout << ch;
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