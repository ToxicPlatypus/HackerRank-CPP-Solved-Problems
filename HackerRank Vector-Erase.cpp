
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,inp,i;
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>inp;
        vec.push_back(inp);
    }
    int a;
    cin>>a;
    a--;
    vec.erase(vec.begin()+a);
    int b,c;
    cin>>b>>c;
    b--;c--;
    vec.erase(vec.begin()+b,vec.begin()+c);
    cout<<vec.size()<<endl;
    for (i = 0; i < vec.size(); i++)
        cout<< vec[i]<<" ";
    return 0;
}
