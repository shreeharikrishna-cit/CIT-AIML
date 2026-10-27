#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int rollno;
    string name;
    public:
    student(int r,string n){
        rollno=r;
        name=n;
        cout<<"Student object created"<<endl;
    }
    void display(){
        cout<<"Std Roll no : "<<rollno<<endl;
        cout<<"std name : "<<name<<endl;

    }

    ~student(){
        cout<<"Student Object Destroyed"<<endl;
    }
};
int main(){
    student s1(27,"Shree Hari");
    s1.display();
    return 0;

}
