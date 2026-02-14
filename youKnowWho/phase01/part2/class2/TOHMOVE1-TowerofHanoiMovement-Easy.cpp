// link: https://www.spoj.com/problems/TOHMOVE1/
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

int disks, m;
int curr = 0;

void solve(int disks, char from, char middle, char to)
{
    if (disks == 0)
        return;
    solve(disks - 1, from, to, middle);
    curr++;

    if (curr == m)
    {
        cout << disks << " : " << from << " => " << to << endl;
    }
    solve(disks - 1, middle, from, to);
}

void program()
{
    cin >> disks >> m;
    solve(disks, 'A', 'B', 'C');
    curr = 0;
}

int32_t main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}