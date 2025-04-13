//creating a class use the class keyword
//creating an object state the className followed by object name


//methods- this are functions that belong to a class
    //objects invoke methods via dot operator(.)
    //methods can be defined inside the class or outside the class
        //outside the class - declare the method in the class and outside the class define the method
            //void/int/string className::methodname 

//CONSTRUCTOR
/*
-A constructor is a special method that is called automatically when an object is called.It usually initializes variables
    -Has the same name as the class
    -Has no return value (not even void)
    -can be overloaded 
    -called once when the object is created

*/
//DESTRUCTOR
/*
-A destructor is a special method that gets called when an object goes out of scope or gets deleted.It performs cleaning on the resources(closing files and freeing memory)
    -No paramters or no return type values
    -One destructor per class
    -Same name as the class but it starts with a tilde ~
    -Gets called once when the object is destroyed
*/

//ACCESS SPECIFIERS
/*
Access specifies define how members(attributes & methods)of a class can be accessed
There are three specifiers(public,private,protected)
    public-members can be accessed outside the class
    private(default)-members cannot be accessed/viewed outside the class
    protected-members cannot be accessed outside the class ,but can be accessed in an  inherited class



*/

//===================================================== ENCAPSULATION ==========================================================
/*
Encapsulation is the wwrapping up of data and functions together in a single unit called a class
The data is only accessible to the function that are in the same class.The data is not accessible outside the class

*/










#include <iostream>
using namespace std;

class Student{
    public://access specifier
    string fName;//attributes
    int age;//attriubtes

    //Internal method 
    void internalMethod(string fName){
        cout<<"Hello "<<fName<<endl;
    }
    //external method definition
    void externalMethod(int age);

    //constructor
    Student(string fName){
        cout<<"Constructor called for "<<fName<<endl;
    }
    //Destructor
    ~Student(){
        cout<<"Destructor called for "<<fName<<endl;
    }

    private:
    int id;//cannot be accessed/viewed outside the class,but can be accessed by a public method in the same class

};
void Student::externalMethod(int age){
    cout<<"You age is "<<age<<endl;
}

class Employee{
    int salary;

    public:
    //setter function
    void setSalary(int s){
        salary=s;
    };

    //getter function
    int getSalary(){
        return salary;
    };

};




int main(){

    //creating an object state the className foloowed by object name
    Student firstStudent("ff");

    firstStudent.age=10;
    firstStudent.fName="ff";


    cout<<firstStudent.fName<<endl;
    firstStudent.internalMethod(firstStudent.fName);
    firstStudent.externalMethod(firstStudent.age);

    Employee employeeA;
    employeeA.setSalary(60000);
    cout<<"The salary is "<<employeeA.getSalary()<<endl;

    //when main ends the destructor gets called



    return 0;
}