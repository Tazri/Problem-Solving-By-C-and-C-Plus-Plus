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

bool isABA(int i, string s)
{
    return (s[i] == 'a' && s[i - 1] == 'b' && s[i - 2] == 'a');
}

void program()
{
    string input;
    string s = "xx";
    cin >> input;
    s += input;
    s += "xx";
    int n = s.size();

    int cnt = 0;
    int ans = 0;
    for (int i = 2; s[i] != 'x'; i++)
    {
        // if (s[i] == 'b')
        //     continue;

        // int form = 0;
        // // check for a
        // form++;
        // if (isABA(i, s))
        //     ans += (cnt - 1);
        // else
        //     ans += cnt;

        cout << s[i] << endl;
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