// link : https://www.codechef.com/problems/THALA7
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

int main()
{
    optimize();
    int n;
    cin >> n;
    if (n == 7)
    {
        cout << "THALA" << endl;
    }
    else
    {
        cout << "SADGE" << endl;
    }
    return 0;
}