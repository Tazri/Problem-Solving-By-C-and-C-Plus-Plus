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

bool compare(Person p1, Person p2)
{
    if (p1.name == p2.name && p1.surename == p2.surename)
        return p1.year > p2.year;

    if (p1.surename == p2.surename)
        return p1.name < p2.name;

    return p1.surename < p2.surename;
}

void program()
{
    int n;
    cin >> n;
    vector<Person> arr(n);

    for (int i = 0; i < n; i++)
    {
        Person p;
        cin >> p.name >> p.surename >> p.year;
        arr[i] = p;
    }

    sort(arr.begin(), arr.end(), compare);

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