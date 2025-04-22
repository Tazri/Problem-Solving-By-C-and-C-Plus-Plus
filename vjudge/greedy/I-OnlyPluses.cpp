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
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < 5; i++)
    {
        if (a <= b && a <= c)
            a++;
        else if (b <= a && b <= c)
            b++;
        else
            c++;
    }

    cout << a * b * c << endl;
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