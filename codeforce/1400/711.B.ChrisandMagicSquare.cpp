// link : https://codeforces.com/problemset/problem/711/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int check(vector<vector<int>> &v){
    int n = v.size()-1;

    set<int> st;

    for(int i= 1;i<= n;i++){
        int row = 0;
        bool zero  = false;
        for(int j = 1;j <= n;j++){
            if(v[i][j] == 0){zero = true;break;}

            row += v[i][j];
        }

        if(!zero)
        st.insert(row);
    }

    for(int j= 1;j<= n;j++){
        int col = 0;
        bool zero  = false;
        for(int i = 1;i <= n;i++){
            if(v[i][j] == 0){zero = true;break;}

            col += v[i][j];
        }

        if(!zero)
        st.insert(col);
    }

    if(st.size() >1)
        return -1;


    int d1 = 0;
    int d2 = 0;
    bool zero = false;
    for(int i = 1;i <= n;i++){
        if(v[i][i] == 0){
            zero = true;
            break;
        }
        d1 += v[i][i];
    }

    if(!zero)
        st.insert(d1);
    zero = false;
    for(int i = 1,j= n;i <= n;i++,j--){
        if(v[i][j] == 0){
            zero = true;
            break;
        }
        d2 += v[i][j];
    }

    if(!zero)
    st.insert(d2);

    if(st.size() > 1)
    return -1;

    int sum = *st.begin();
    
    return sum;

}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<vector<int>> v(n+1,vector<int>(n+1));

    int ti = 0;
    int tj= 0;
    for(int i= 1;i<= n;i++){
        for(int j = 1;j <= n;j++){
            cin >> v[i][j];
            if(v[i][j] == 0){
                ti = i;
                tj = j;
            }
        }
    }
    
    if(n == 1){
        cout <<1 << endl;
        return;
    }
    
    int sum = check(v);
    
    if(sum  == -1){
        cout << -1 << endl;
        return;
    }
    int rsum = 0;
    for(int i = 1;i<= n;i++){
        rsum += v[ti][i];
    }
    
    int x= sum-rsum;
    

    if(x <= 0 || x >((ll)1e18)){
        cout <<-1 << endl;
        return;
    }
    
    
    v[ti][tj] = x;
    
    int nsum = check(v);
    if(nsum == -1){
        cout << -1 << endl;
        return;
    }

    cout<< x << endl;
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