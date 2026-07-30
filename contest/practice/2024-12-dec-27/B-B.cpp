// link : https://www.codechef.com/problems/SPECIALITY
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

void test()
{
    int x, y, z;

    cin >> x >> y >> z;

    if (x > y && x > z)
    {
        cout << "Setter" << endl;
    }
    else if (y > x && y > z)
    {
        cout << "Tester" << endl;
    }
    else
    {
        cout << "Editorialist" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}