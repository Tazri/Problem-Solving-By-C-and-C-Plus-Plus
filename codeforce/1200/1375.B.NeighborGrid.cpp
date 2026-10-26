// link : https://codeforces.com/problemset/problem/1375/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n,m;
    cin >> n >> m;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if((i == 0 && j == 0) || (i == 0 && j == m-1) || (i == n-1 && j == 0) || (i == n-1 && j == m-1)){
                if(v[i][j] > 2){
                    cout <<"NO" << endl;
                    return;
                }
                v[i][j] = 2;
                continue;
            }

            if(i == 0 || i == n-1 || j == 0 || j == m-1){
                if(v[i][j] > 3){
                    cout <<"NO" << endl;
                    return;
                }
                v[i][j] = 3;
                continue;
            }

            if(v[i][j] > 4){
                cout <<"NO" << endl;
                return;
            }
            v[i][j] = 4;
        }
    }
cout <<"YES" << endl;
    for(int i =0;i < n;i++)
        for(int j = 0;j < m;j++)
        cout << v[i][j] << " \n"[j == m-1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}