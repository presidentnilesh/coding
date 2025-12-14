#include <iostream>
using namespace std ;


class students {
    private :
    int age ;
    public :
string name ;
int roll ;
float marks ;
    
    void setage(int a ){
        age=a ;
    }
    int getage(){
        return age;
    }
};

int main (){
    students s1 ;
    
    s1.name = "nilesh";
    s1.marks = 95.5 ;
    s1.roll = 101 ;
    s1.setage(3) ;
    cout<<"thne name is : "<<s1.name ;
    cout<<"\nthe marks is : "<<s1.marks ;
    cout<<"\nthe roll is : "<<s1.roll<<endl ;
    cout<<s1.getage()<<endl ;
    return 0 ;
}
