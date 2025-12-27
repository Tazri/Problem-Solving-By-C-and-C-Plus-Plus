// link : https://toph.co/p/formatted-numbers
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
    int a;
    cin >> a;

    if (a <= 999)
        cout << a << endl;
    else if (a <= 999999)
    {
        int last = a % 1000;
        a /= 1000;
        printf("%d,%03d\n", a, last);
    }
    else
    {
        int right = a % 1000;
        a /= 1000;
        int mid = a % 1000;
        a /= 1000;
        printf("%d,%03d,%03d\n", a, mid, right);
    }
}

int main()
{
    optimize();
    program();
    return 0;
}