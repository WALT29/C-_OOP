//====================================================  C++ OOP =============================================================================
//==========================================================================================================================================
/*
    creating a class use the class keyword followed by the class name
        class Animal{
        }
    
    creating an object ,state the class name followed by the object name
        AnimaL Dog

    Methods
        . Methods are functions that belong to a class
        . To invoke a method use the dot-operator (.)
            Dog.bark()
        . Methods can be defined in 2 ways (internal or external)
                class Car{
                    int year;

                    public:
                    
                    void yearSetter(int y){ Internal method definition
                        year=y
                    };

                    void yearGetter(){
                        cout<<year;
                    }
                    
                
                
                }



*/

//methods- this are functions that belong to a class
    //objects invoke methods via dot operator(.)
    //methods can be defined inside the class or outside the class
        //outside the class - declare the method in the class and outside the class define the method
            //void/int/string className::methodname 

//CONSTRUCTOR
/*
-A constructor is a special method that is called automatically when an object is created .It usually initializes variables
    -Has the same name as the class
    -Has no return value (not even void)
    -can be overloaded /multiple constructors
    -called once when the object is created
    -Always public

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
Encapsulation has the following core concepts (data hiding ,controlled access and Bundling)
    data hiding - keeps the internal data private ,so that it cannot be accessed outside the class
    bundling -wrapping related data and functions together in a class
    Controlled access - providing public methods which can access and modify the data in a controlled way

    Benefits of encapsulation
    Modularity-classes become self contained units
    Maintainability -easier to maintain and modify code
    data protection-prevents accidental modification of sensitive data
    increased security-controls how data is accessed and modified

*/

//===================================================== INHERITANCE =========================================================================
//==========================================================================================================================================
/*
    Inheritance is a core concept that allows the derived class(child class) to inherit members(attribute and methods ) from the base class(Parent class)
    Inheriatance promotes code reusabilty

    To inherit from a class use :
    class Derived: access_modifier Base{
    }

    Access modifier
    Public -the inherited member access remain at it is
    Private- the inherited member access becomes private
    Protected- the inherited member access becomes protected
    
    
    
    
    
    Types of inheritance 
        -)Single inheritance
        -)Multiple inheritance
        -)Multilevel inheritance
        -)Hierarchical inheritance
        -)Hybrid inheritance

        a)Single Inheritance
        =====================
        In single inheritance a single derived class inherits from a single base class
            class Base{
                base class members
            }
            
            class Derived:public Base{
                derived class members
            }
            

        b)Multiple Inheritance
        =======================
        In multiple inheritance a single derived class inherits from single base class
            class Base1{
                base class members
                }
            
            class Base2{
                base class members
                }
            
            class derived:public Base1,public Base2{
                derived class members
            }






        c)Multilevel Inheritance
        ========================
        In single inheritance a derived class inherits from another derived class

        class Base{
            base class members
        };

        class Derived1:public Base{
            derived class members
        }
        
        class Derived2:public Derived1{
            derived class members
        }


        d)Hierarchical inheritance
        ==========================
        In a hierarchical inheritance multiple derived class inherits from a single base class
            class Base{
                base class members
            }
            class Derived1:public Base{
                derived 1 class members
            }
            class Derived2:public Base{
                derived 2 class members
            }






*/










#include <iostream>
using namespace std;

class Car{
    public://Access specifier - specifies how the attributes or the methods in the class can be accessed
    int year;
    string model;
    float weight;

    private://The private access specifiers ,the members cannot be accessed or viewed outside the class;
    string brand;

    public:
    //internal method definition
    //encapsulation - using setter and getter methods
    void brandSetter(string n){
        brand=n;
    };

    //External definition
    void brandGetter();//method declaration

    //constructor-A special method that is called automatically when an object is created.It usually initializes variables
    Car(int year){
        cout<<"Your car year :"<<year;
    };

    //A special method that is called automatically when an object goes outside the scope or deleted.Used to clean up resources such as memory freeing and closing files
    ~Car(){
        cout<<"Car destructor is called"<<endl;
    }

};
//External method definition
void Car::brandGetter(){
    cout<<"Your car brand is : "<<brand<<endl;
};









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