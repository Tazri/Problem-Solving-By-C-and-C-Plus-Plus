// link : https://codeforces.com/problemset/problem/1883/A
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

vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
vector<int> pos = {9, 0, 1, 2, 3, 4, 5, 6, 7, 8};

void program()
{
    string pin;
    cin >> pin;
    int frm = 0;
    int ans = 0;
    for (char ch : pin)
    {
        int d = (int)ch - (int)'0';
        int to = pos[d];

        int diff = frm > to ? frm - to : to - frm;
        ans += diff + 1;
        frm = to;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}