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
    int n, m;
    string x;
    string s;
    cin >> n >> m;
    cin >> x;
    cin >> s;
    int op = 0;

    while (x.size() <= s.size() * 3 || op <= 5)
    {
        if (x.find(s) != string::npos)
        {
            cout << op << endl;
            return;
        }
        op++;
        x += x;
    }
    cout << -1 << endl;
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