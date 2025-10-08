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
    int one = 0;
    int zero = 0;

    string s;
    cin >> s;

    for (char ch : s)
        if (ch == '1')
            one++;
        else
            zero++;

    if (one == 0 || zero == 0)
    {
        cout << "Bob" << endl;
        return;
    }

    if (one == 1 || zero == 1)
    {
        cout << "Alice" << endl;
        return;
    }

    int sum = one + zero - 4;

    if (sum & 1)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
    }
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