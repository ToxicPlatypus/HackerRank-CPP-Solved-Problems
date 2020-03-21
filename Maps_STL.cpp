#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    map<string,int>::iterator it;
    int n,a,x;
    string ch;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        switch(a)
        {
            case 1:
            cin>>ch>>x;
            it=m.find(ch);
            if(it==m.end())
                m.insert(make_pair(ch,x));
            else
                it->second+=x;
            break;

            case 2:
                cin>>ch;
                m.erase(ch);
                break;

            case 3:
                cin>>ch;
                it=m.find(ch);
                if(it==m.end())
                    cout<<0<<endl;
                else
                cout<<it->second<<endl;
                break;
        }
    }
    return 0;
}

