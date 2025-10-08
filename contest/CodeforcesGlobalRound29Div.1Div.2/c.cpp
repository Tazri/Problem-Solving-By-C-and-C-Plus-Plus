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

#define block 'x'
#define flower 'f'
#define empty 'e'

void doFilter(string s, vector<char> &v)
{
    int n = s.size();

    int len = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v[i] = flower;
            len = 0;
            continue;
        }
        v[i] = empty;
        len++;
        if (len > 2)
        {
            v[i - 1] = block;
        }
    }
}

bool check1(vector<char> &v)
{
    int n = v.size();

    int left = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == block)
        {
            left = -1;
            continue;
        }

        if (v[i] == flower)
            continue;

        if (left == -1)
        {
            left = i;
            continue;
        }

        int right = i;
        int len = right - left - 1;

        if (len == 0)
        {
            left = right;
            continue;
        }
        else if (len == 1)
        {
            if (left == 0)
                left = right;
            else
                left = -1;
            continue;
        }

        if (left == 0 || v[left - 1] == block)
        {
            left = right;
            continue;
        }
        return false;
    }

    if (left != -1)
    {
        if (left == 0 || left == n - 1 || v[left - 1] == block || v[left - 1] == empty)
            return true;
        return false;
    }

    return true;
}

bool check2(vector<char> &v)
{
    int n = v.size();

    int left = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == block)
        {
            left = -1;
            continue;
        }

        if (v[i] == flower)
            continue;

        if (left == -1)
        {
            left = i;
            continue;
        }

        int right = i;
        int len = right - left - 1;

        if (len == 0)
        {
            left = right;
            continue;
        }
        else if (len == 1)
        {
            left = -1;
            continue;
        }

        if (left == 0 || v[left - 1] == block)
        {
            left = right;
            continue;
        }
        return false;
    }

    if (left != -1)
    {
        if (left == 0 || left == n - 1 || v[left - 1] == block || v[left - 1] == empty)
            return true;
        return false;
    }

    return true;
}

void program()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    vector<char> v(n);
    doFilter(s, v);

    if (check1(v) || check2(v))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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