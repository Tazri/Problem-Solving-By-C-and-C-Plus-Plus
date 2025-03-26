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

    if (n % 7 == 0)
    {
        cout << n << endl;
        return;
    }

    int mod = n % 7;
    int need = 7 - mod;
    int n1 = n - mod;
    int n2 = n + need;

    bool isZero = false;
    int cn1 = n1;
    int cn = n;
    int cnt = 0;
    while (cn1 || cn)
    {
        int ld = cn1 % 10;
        int nld = cn % 10;
        if (ld != nld)
        {
            cnt++;
        }
        cn /= 10;
        cn1 /= 10;
    }

    if (cnt == 1)
        cout << n1 << endl;
    else
        cout << n2 << endl;
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