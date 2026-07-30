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

int sz = 1e6;
vector<int> nod(sz + 1, 0);

void cal()
{
    for (int i = 1; i <= sz; i++)
        for (int j = i; j <= sz; j += i)
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