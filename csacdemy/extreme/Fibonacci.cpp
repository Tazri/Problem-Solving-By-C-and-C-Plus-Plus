// https://csacademy.com/ieeextreme-practice/task/09f92a575cc006d4a6a7f525f370ec30/
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

vector<int> fiv;

void calc()
{
    fiv.reserve(100);
    int f = 1;
    int s = 2;
    fiv.push_back(f);
    fiv.push_back(s);
    while (true)
    {
        int t = f + s;
        t %= 10;
        fiv.push_back(t);
        f = s;
        s = t;

        if (f == 1 && s == 2)
            break;
    }

    fiv.pop_back();
    fiv.pop_back();
}

void program()
{
    int m;
    cin >> m;
    m--;
    m %= fiv.size();
    cout << fiv[m] << endl;
}

int main()
{
    optimize();
    calc();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}