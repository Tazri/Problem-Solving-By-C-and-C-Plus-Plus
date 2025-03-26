// link : https://lightoj.com/problem/greetings-from-lightoj
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

void program(int c)
{
    int a, b;
    cin >> a >> b;
    cout << "Case " << c << ": " << a + b << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        program(i);
    }
    return 0;
}