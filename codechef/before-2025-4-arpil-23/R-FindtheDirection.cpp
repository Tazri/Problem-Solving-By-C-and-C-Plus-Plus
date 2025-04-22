// link : https://www.codechef.com/problems/FACEDIR
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
    int l = n % 4;

    if (l == 0)
        cout << "North" << endl;
    else if (l == 1)
        cout << "East" << endl;
    else if (l == 2)
        cout << "South" << endl;
    else if (l == 3)
        cout << "West" << endl;
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