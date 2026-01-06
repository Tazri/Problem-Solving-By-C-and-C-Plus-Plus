// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V
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
int n, x;
vector<int> v;
bool done = false;
void isPossible(int i = 0, int curr = 0)
{
    if (done)
        return;

    if (i >= n)
        if (curr == x)
        {
            done = true;
            return;
        }
        else
            return;

    if (i == 0)
        isPossible(i + 1, v[i]);
    else
    {
        isPossible(i + 1, curr + v[i]);
        isPossible(i + 1, curr - v[i]);
    }
}

void program()
{
    cin >> n >> x;
    v = vector<int>(n);

    for (int &vi : v)
        cin >> vi;

    isPossible();

    if (done)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}