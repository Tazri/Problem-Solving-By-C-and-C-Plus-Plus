// link : https://codeforces.com/contest/112/problem/A
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
    string str1, str2;

    cin >> str1 >> str2;

    // convert str1 to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    int res = str1.compare(str2);

    cout << (res < 0 ? -1 : res > 0 ? 1
                                    : 0)
         << endl;
    return 0;
}