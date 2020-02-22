#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    switch(a)
    {
        case 1:
        cout<<"one"<<endl;
        if(b==1)
            break;
        case 2:
        cout<<"two"<<endl;
        if(b==2)
            break;
        case 3:
        cout<<"three"<<endl;
        if(b==3)
            break;
        case 4:
        cout<<"four"<<endl;
        if(b==4)
            break;
        case 5:
        cout<<"five"<<endl;
        if(b==5)
            break;
        case 6:
        cout<<"six"<<endl;
        if(b==6)
            break;
        case 7:
        cout<<"seven"<<endl;
        if(b==7)
            break;
        case 8:
        cout<<"eight"<<endl;
        if(b==8)
            break;
        case 9:
        cout<<"nine"<<endl;
        if(b==9)
            break;
    }
    for(i=10;i<=b;i++)
    {
        if(i%2==0)
        cout<<"even"<<endl;
        else
        cout<<"odd"<<endl;
    }
    return 0;
}
