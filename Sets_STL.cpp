
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> s;
    set <int> :: iterator st;
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        switch(a)
        {
        case 1:
            s.insert(b);
            break;
        case 2:
            s.erase(b);
            break;
        case 3:
            st=s.find(b);
            if(st==s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
