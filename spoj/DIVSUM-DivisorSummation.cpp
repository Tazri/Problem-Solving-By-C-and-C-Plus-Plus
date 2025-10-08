// link : https://www.spoj.com/problems/DIVSUM/
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

vector<int> sod(500001, 0);

void cal()
{
    for (int i = 1; i <= 500000; i++)
        for (int j = i + i; j <= 500000; j += i)
            sod[j] += i;
}

void program()
{
    int n;
    cin >> n;
    cout << sod[n] << endl;
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