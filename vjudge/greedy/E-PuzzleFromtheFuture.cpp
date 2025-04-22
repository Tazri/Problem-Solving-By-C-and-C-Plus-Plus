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

int s(char a, char b)
{
    return ((int)a - (int)'0') + ((int)b - (int)'0');
}

void program()
{
    int n;
    cin >> n;
    string b;
    string a(n, '1');
    cin >> b;

    int prev = s(a[0], b[0]);

    for (int i = 1; i < n; i++)
    {
        char ch = b[i];
        int sum = s(ch, '1');

        if (sum != prev)
        {
            a[i] = '1';
            prev = sum;
        }
        else
        {
            a[i] = '0';
            prev = s(ch, '0');
        }
    }

    cout << a << endl;
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