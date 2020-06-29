#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ll n, i, num;
    cin >> n;

    vector <int> v;
    vector <int> :: iterator it;

    for(i=0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    ll x;
    cin >> x;

    for(i=0; i<x; i++)
    {
        cin >> num;
        it = lower_bound(v.begin(), v.end(), num);
        if(*(it+1) == num || *it == num)
            cout << "Yes " << it - v.begin() + 1 <<endl;
        else
            cout << "No " << it - v.begin() + 1 << endl;
    }

    return 0;
}
