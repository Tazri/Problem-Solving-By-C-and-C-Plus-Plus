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
vector<int> phi;

void buildPhi(int n, vector<int> &phi)
{
    phi.resize(n + 1);
    for (int i = 1; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
void program()
{
    int n;
    cin >> n;
    cout << phi[n] << endl;
}

int main()
{
    optimize();
    buildPhi(sz, phi);
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}