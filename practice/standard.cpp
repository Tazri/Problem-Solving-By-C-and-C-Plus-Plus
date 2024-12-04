#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)

bool maxn(int a,int b){
    return a > b;
}

int main()
{
    optimize();
    vector <int> nums = {4};


    cout << nums.at(0) << endl;
    nums.clear();
    cout << nums.size() << endl ;

    nums.resize(3);
    nums[2] = 100;
    cout << nums[2] << endl;
    nums.emplace_back(99);
    cout << nums[2] << endl;
    return 0;
}