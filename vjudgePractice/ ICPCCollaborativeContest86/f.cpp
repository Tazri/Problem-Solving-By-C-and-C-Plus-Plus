// TODO : study must
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
    int a, b;
    cin >> a >> b;

    if (n <= a)
    {
        cout << "Alice" << endl;
        return;
    }

    if (a == b)
    {
        int a1 = a + 1;

        if (n % a1 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;

        return;
    }

    if (a > b)
    {
        cout << "Alice" << endl;
        return;
    }
    cout << "Bob" << endl;
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