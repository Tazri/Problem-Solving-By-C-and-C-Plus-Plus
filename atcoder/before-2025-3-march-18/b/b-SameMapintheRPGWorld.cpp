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

void getMp(vector<string> &m)
{
    for (int i = 0; i < m.size(); i++)
    {
        cin >> m[i];
    }
}

void verticalShift(vector<string> &a)
{
    // shift once
    string first = a[0];
    for (int i = 0; i < a.size() - 1; i++)
    {
        a[i] = a[i + 1];
    }

    a[a.size() - 1] = first;
}

void verticalShift(vector<string> &a, int times)
{
    for (int i = 0; i < times; i++)
        verticalShift(a);
}

void stringShift(string &a)
{
    if (a.size() <= 1)
    {
        return;
    }

    char first = a[0];

    for (int i = 0; i < a.size() - 1; i++)
    {
        a[i] = a[i + 1];
    }

    a[a.size() - 1] = first;
}

void stringShift(string &s, int t)
{
    for (int i = 0; i < t; i++)
        stringShift(s);
}

void horizontalShift(vector<string> &mp, int t)
{
    for (int i = 0; i < mp.size(); i++)
        stringShift(mp[i], t);
}

void program()
{
    int h, w;
    cin >> h >> w;

    vector<string> a(h);
    vector<string> b(h);
    vector<string> copy;
    getMp(a);
    getMp(b);

    // now shifting and compare
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            // copy first
            copy = a;

            // shift
            verticalShift(copy, i);
            horizontalShift(copy, j);

            // no compare
            if (copy == b)
            {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}