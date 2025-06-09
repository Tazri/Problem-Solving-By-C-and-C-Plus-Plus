// link : https://toph.co/p/neat-brackets
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

    for (char ch : s)
    {
        if (ch == '(')
        {
            cnt++;
            continue;
        }

        if (cnt <= 0)
        {
            cout << "No" << endl;
            return;
        }

        cnt--;
    }

    if (cnt > 0)
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}