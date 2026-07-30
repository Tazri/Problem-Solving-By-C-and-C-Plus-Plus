// link : https://codeforces.com/contest/2056/problem/B
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

void test()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> con(n + 1, 0);
    vector<vector<bool>> graph(n + 1);

    for (int i = 0; i <= n; i++)
    {
        graph[i] = vector<bool>(n + 1, false);
    }

    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++)
        {
            char c = s[j];
            if (c == '1')
            {
                con[i]++;
                graph[i][j + 1] = true;
            }
            else
            {
                graph[i][j + 1] = false;
            }
        }
    }

    // print graph
    // cout << "Print graph : " << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= n; j++)
    //     {
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    sort(p.begin(), p.end(), [&con, &graph](int a, int b)
         {
        if(con[a] == con[b]){
            if(graph[a][b] && a > b){
                return a < b;
            }else{
                return a > b;
            }
        }
        if( con[a] < con[b] && a < b){
            return  con[a] > con[b];
        }else{
            return con[a] < con[b];
        } });

    cout << p[0];
    for (int i = 1; i < n; i++)
    {
        cout << " " << p[i];
    }
    cout << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while (t--)
    test();
    return 0;
}
// TODO
/**

2
01
10

->
1 2
*/