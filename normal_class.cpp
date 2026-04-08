#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    string dept;
    string subject;
    float marks;

    void rewrite_marks(float m)
    {
        marks = m;
    }
};

int main()
{
    Student s1;
    s1.name = "Jishabh Farend";
    s1.dept = "computer science";
    s1.subject = "C++";
    s1.marks = 70 ;

    s1.rewrite_marks(79);

    cout << "name" << " "<< s1.name << endl ;
    cout << "dept" << " " << s1.dept << endl ;
    cout << "marks" << " " << s1.marks << endl ;
    
    return 0;
}