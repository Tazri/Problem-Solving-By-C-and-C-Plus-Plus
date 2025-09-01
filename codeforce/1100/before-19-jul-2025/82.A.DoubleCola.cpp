// link : https://codeforces.com/problemset/problem/82/A
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

    int num = 1;
    int turn = n;
    vector<string> players = {"", "Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

    for (int i = 5; i < turn; i *= 2)
    {
        num *= 2;
        turn -= i;
    }

    int wi = (turn + num - 1) / num;
    cout << players[wi] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}