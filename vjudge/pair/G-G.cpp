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

struct Person
{
    string name;
    string surename;
    int year;
};

void program()
{
    int n;
    cin >> n;

    vector<Person> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].surename >> arr[i].year;
    }

    sort(arr.begin(), arr.end(), [](Person left, Person right)
         {
        if(left.surename == right.surename){
            
            if(left.name == right.name){
                return left.year > right.year;
            }

            return left.name < right.name;
        }
        return left.surename < right.surename; });

    for (Person p : arr)
    {
        cout << p.name << " " << p.surename << " " << p.year << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}