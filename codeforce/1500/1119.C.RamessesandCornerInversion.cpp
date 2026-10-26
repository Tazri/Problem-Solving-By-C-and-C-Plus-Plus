// link : https://codeforces.com/problemset/problem/1119/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int totalOneCnt(vector<vector<int>> &v,int n,int m){
    int cnt = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cnt += v[i][j];
        }
    }

    cnt%=2;

    return cnt;
}

vector<int> rowCnt(vector<vector<int>> &v,int n,int m){
    vector<int> row(n,0);

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            row[i] += v[i][j];
        }
        row[i]%=2;
    }

    return row;
}

vector<int> colCnt(vector<vector<int>> &v,int n,int m){
    vector<int> col(m,0);

    for(int j = 0;j < m;j++){
        for(int i = 0;i < n;i++){
            col[j] += v[i][j];
        }
        col[j]%=2;
    }

    return col;
}

void _DIBBA(int _DIBBA_NO)
{
    int n,m;
    cin>> n >> m;

    vector<vector<int>> a(n,vector<int>(m));
    vector<vector<int>> b(n,vector<int>(m));

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> b[i][j];
        }
    }

    int aCnt = totalOneCnt(a,n,m);
    int bCnt = totalOneCnt(b,n,m);

    if(aCnt != bCnt){
        cout <<"NO" << endl;
        return;
    }

    if((rowCnt(a,n,m)!= rowCnt(b,n,m)) || (colCnt(a,n,m) != colCnt(b,n,m))){
        cout <<"NO" << endl;
        return;
    }

    cout <<"YES" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}