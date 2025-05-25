// link : https://www.hackerrank.com/challenges/caesar-cipher-1/problem
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

int index(char ch)
{
    ch = tolower(ch);
    return (int)ch - (int)'a';
}

int shift(int i, int k)
{
    return (i + k) % 26;
}

void program()
{
    int n, k;
    string s;
    cin >> n;
    cin >> s;
    cin >> k;

    for (char ch : s)
    {
        if (tolower(ch) < 'a' || tolower(ch) > 'z')
        {
            cout << ch;
            continue;
        }

        int chi = index(ch);
        chi = shift(chi, k);

        char c = (char)((int)'a' + chi);

        if (toupper(ch) == ch)
            c = toupper(c);

        cout << c;
    }
    cout << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}