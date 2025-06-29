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

void print_digits(int n)
{
    if (n / 10 == 0)
    {
        cout << n << " ";
        return;
    }

    int d = n % 10;
    n /= 10;
    print_digits(n);
    cout << d << " ";
}

int main()
{
    optimize();
    int x;
    cin >> x;
    print_digits(x);
    return 0;
}