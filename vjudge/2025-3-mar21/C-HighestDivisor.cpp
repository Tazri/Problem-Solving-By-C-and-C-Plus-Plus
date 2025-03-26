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

    for (int i = 10; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    optimize();

    program();
    return 0;
}