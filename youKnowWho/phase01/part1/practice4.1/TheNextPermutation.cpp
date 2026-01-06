#include <iostream>
#include <algorithm>
#include <string>
#include <cstdint>

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

void program(int caseno)
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    cout << n << " ";
    if (next_permutation(s.begin(), s.end()))
        cout << s << endl;
    else
        cout << "BIGGEST" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}