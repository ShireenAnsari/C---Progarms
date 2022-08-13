#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

void displayData(Person);   // Function declaration

int main()
{
    Person p;

    cout << "Enter Full name: ";
    cin>>p.name;
    cout << "Enter age: ";
    cin >>p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    // Function call with structure variable as an argument
    displayData(p);

    return 0;
}

void displayData(Person Q)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << Q.name << endl;
    cout <<"Age: " << Q.age << endl;
    cout << "Salary: " << Q.salary;
}
