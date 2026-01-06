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

    if (n == 1)
    {
        cout << "*" << endl;
        return;
    }

    string line = "*";
    for (int i = 0; i < n - 1; i++)
    {
        line.push_back(' ');
        line.push_back('*');
    }
    string mid(line.size(), ' ');
    mid[0] = '*';
    mid.back() = '*';

    cout << line << endl;
    for (int i = 0; i < n - 2; i++)
        cout << mid << endl;
    cout << line << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}