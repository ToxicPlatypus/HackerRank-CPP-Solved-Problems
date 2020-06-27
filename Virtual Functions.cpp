#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////

static int i=0, j=0;

class Person
{
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
protected:
    string name;
    int age, score, id;
};

class Professor : public Person
{
    void putdata()
    {
        cout << name <<' '<< age <<' '<< score <<' '<< ++i <<endl;
    }

    void getdata()
    {
        cin >> name >> age >> score;
    }
};

class Student : public Person
{
    void putdata()
    {
        cout << name <<' '<< age <<' '<< score <<' '<< ++j <<endl;
    }

    void getdata()
    {
        cin >> name >> age;
        score = 0;
        int x;
        for(int i=0; i<6; i++)
        {
            cin >> x;
            score+=x;
        }
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
