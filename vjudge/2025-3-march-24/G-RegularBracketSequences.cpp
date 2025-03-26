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
    int pair = n;
    int nonPair = 0;
    for (int i = 0; i < n; i++)
    {
        for (int t = 0; t < nonPair; t++)
            cout << "(";
        for (int t = 0; t < pair; t++)
            cout << "()";
        for (int t = 0; t < nonPair; t++)
            cout << ")";
        cout << endl;

        pair--;
        nonPair++;
    }
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