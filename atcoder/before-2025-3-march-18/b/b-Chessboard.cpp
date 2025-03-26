// link: https://www.hackerrank.com/contests/smart-interviews/challenges/si-product-of-2-matrices
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

int main()
{
    optimize();
    int c, r;

    for (int i = 1; i <= 8; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < 8; j++)
        {
            if (s[j] == '*')
            {
                c = j;
                r = 8 - i + 1;
            }
        }
    }

    char ch = (char)((int)'a' + c);
    cout << ch << r << endl;
    return 0;
}