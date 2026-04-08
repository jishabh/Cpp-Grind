#include <iostream>
#include <string>
using namespace std;

class Worker
{
private:
    double salary;

public:
    string name;
    string field;
    long int id_no;

    void setsalary(double s)
    {
        salary = s;
    }

    double getsalary()
    {
        return salary;
    }
};

int main()
{
     Worker w1;
     w1.name = "josh";
     w1.field = "paint supervisor";
     w1.id_no = 135235680;
    
     w1.setsalary(30000);

     cout << "name of worker" << " " << w1.name << endl;
     cout << "salary of worker" <<  " " <<w1.getsalary();

    return 0;
}
