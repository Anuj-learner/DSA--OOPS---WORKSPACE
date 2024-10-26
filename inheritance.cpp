#include <iostream> 
using namespace std;


//base class

/*
class Parent
{
    public:

    int id_p  ;
    void printID_p(){
        cout << "Base ID: " << id_p << endl ;
    }

} ; 


//derived class 
class Child : public Parent 
{
    public : 
    int id_ch ;
    void printID_ch(){
    cout << "child id : " << id_ch << endl ;
    }

} ;

int main() 
{
    Child obj1 ; 

    obj1.id_p = 7 ; 
    obj1.printID_p() ;

    obj1.id_ch = 10 ; 
    obj1.printID_ch() ;

 }




*/




//inheriting the base class members in derived class 

/* 


class Parent
{
    public: 
    int publicVar ; 

    void display_p()
    {
cout << "public class variable value : \n" << publicVar ; 
    }

}  ; 


class Derived : public Parent
{
    public : 

    //fn to display ineroted membr of base class
    void display_member() 
    {
        display_p() ; // called  the base class member function    

    }

    //modify Inherit membr
     void modify_member(int p)
     {
        publicVar = p ; 
     }
} ; 



int main() 
{
    Derived obj ;
    obj.modify_member(110) ; 

    obj.display_p() ; 
}


*/







//accessing the private members of base class in derived class
//we can inherit through getter 
/* 


class Base
{
    private : 
    int privateVar ;


    public: 
    Base(int val) 
    {
        privateVar = val ;
    }


    //getter func 
    int getPrivateVar() const 
    {
        return privateVar ; 
    }



    //setter fun 
    // The setter allows modifying the value later,
    //  after object creation.


    void setPrivateVar(int val)  {
        privateVar = val ;
    }


} ;



class Derived : public Base 
{
    public : 

    //cnstr to intilaise base class
    Derived(int val) : Base(val) {} ;


//to display private members of base class
void  displayPrivateVar() const {
    cout << "Value of privateVar in Base class:  " << getPrivateVar() << endl ;
}


//...to modify it 
void modifyPrivateVar(int val) {
    setPrivateVar(val) ;  // int val = val 
}

}; 
int main() 
{

Derived obj(10) ; 
obj.displayPrivateVar() ;


obj.modifyPrivateVar(20) ; 
obj.displayPrivateVar() ;
} 



*/






//Multiple inheritance 

//syntax : 
// class Derivedclass : public BaseClass1 , public baseClass2 {}

/* 


class Animal
{
public:
    void makeSound()
    {
        cout << "general sound" << endl;
    }
}  ; 

class Mammal
{
public:
    void giveBirth()
    {
        cout << "mammal give birth !" << endl;
    }
} ; 
 

class Dog : public Animal , public Mammal 
{
    public: 
    void ownSound() 
    {
        cout << "bhaooo bhaoo" << endl ;  
        obj.makeSound() ; 
    obj.giveBirth() ;
    }
} ; 


int main() 
{
    Dog obj ;
    
    obj.ownSound() ;
}


*/