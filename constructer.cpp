#include <iostream>
#include <string>
using namespace std;

class Teacher_info
{
public:
       string name;
       string dept;

       Teacher_info()
       {
              cout << "constructer called" << endl;
              dept = "Data Science";
       }

       void change_dept(string newdept)
       {
              dept = newdept;
       }
};

int main()
{
       Teacher_info t1;
       t1.name = "jishabh";

       cout << "name " << " " << t1.name << endl;
       cout << "name " << " " << t1.dept << endl;

       return 0;
}
