# include <iostream>
using namespace std;
class Student
{
private:
    int rollNo;
    string name;
    
public:
    //constuctor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout<<"Student object created"<<endl;
    }
//memnber function
void display()
{
    cout<<"Roll No: "<<rollNo<<endl;
    cout<<"Name: "<<name<<endl;
}
//destructor
~Student()
{
    cout<<"Student object destroyed"<<endl;
}
};
int main()
{
    Student s1(101, "Arun");
    s1.display();
    return 0;
}

    