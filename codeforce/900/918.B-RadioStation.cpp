// link : https://codeforces.com/problemset/problem/918/B
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

void printCommand(string command, string ip, string name)
{
    cout << command << " " << ip << "; #" << name << endl;
}

void program()
{
    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;

        mp[ip] = name;
    }

    for (int i = 0; i < m; i++)
    {
        string command, ip;
        cin >> command >> ip;
        ip.pop_back();

        printCommand(command, ip, mp[ip]);
    }
}

int main()
{
    optimize();
    program();
    return 0;
}