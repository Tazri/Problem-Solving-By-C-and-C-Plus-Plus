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
    int n, q;
    cin >> n >> q;
    map<string, string> ipBook;

    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        ipBook[ip] = name;
    }

    for (int i = 0; i < q; i++)
    {
        string command, ipc;
        cin >> command >> ipc;
        string ip = ipc;
        ip.pop_back();

        cout << command << " " << ipc << " #" << ipBook[ip] << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}