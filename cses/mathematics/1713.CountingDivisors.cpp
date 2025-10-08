// link : https://cses.fi/problemset/task/1713/

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

vector<int> nod(1e6 + 1, 0);

void cal()
{
    for (int i = 1; i <= 1e6; i++)
        for (int j = i; j <= 1e6; j += i)
            nod[j]++;
}

void program()
{
    int n;
    cin >> n;
    cout << nod[n] << endl;
}

int main()
{
    optimize();
    cal();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}