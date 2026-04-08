#include <iostream>
#include <string>
using namespace std;

class student_info{
// private access modifier 
private :
     float Marks;
// public access modifier
public :
       string name;

};

int main(){
    student_info s1;
    s1.name = "jishabh";
    s1.Marks = 70;

    cout <<"name of student" << " " << s1.name << endl;

    cout <<"marks of student" << " " << s1.Marks << endl;
// this will not gonna run cuz its an private data member of class

    return 0;
}

