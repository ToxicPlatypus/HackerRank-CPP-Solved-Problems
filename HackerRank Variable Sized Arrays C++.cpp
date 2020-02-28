#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,a,tem,m,i,p;
    cin>>n>>q;
    vector <int> v[n];
    for(i=0;i<n;i++)
    {
        cin>>a;
        for(int j=0;j<a;j++){
            cin>>tem;
            v[i].push_back(tem);
        }
    }
    while(q--)
    {
        cin>>m>>p;
        cout<<v[m][p]<<endl;
    }

    return 0;
}
