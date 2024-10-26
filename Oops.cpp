I M CHANGING THIS THOUGH DIFFERENT ACCOUNT !!!
 
#include <iostream> 
using namespace std ; 
 

 // Operator overloading   

 //basic syntax:
     // return_type operator operator_name (paramters) 
    //  {
    //        // Code to define what the operator does
    //  }
 


 // Ex 1 
// class Box
// {
//     public : 
//     int length ; 

//         //constructor to intialise length
//     Box(int l = 0){
//         length = l ; 
//     } 

//     //overloading the + oprtr 
//     Box operator + (Box const &obj)
//     {
//         Box result ; 
//         result.length = length + obj.length ; 
//         return result ;
//     }
// } ; 

// int main () 
// {
//     Box box1(5) , box2(10) ; 
//     Box box3 = box1 + box2 ;

//     cout << "Lenght of box3: " << box3.length << endl; 
//     return 0 ;
// }

 


//Ex2  
// class sum
// {
//     public : 
//     int x , y ; 

//     //constr to initialise x and y 
//     // sum(int x_val = 0 , int y_val = 0 ) : x(x_val) , y(y_val) 
    
//     sum(int x_val = 0 , int y_val = 0) 
//     {
//         x = x_val ; 
//         y = y_val ;
//     } 

//     //overloading the + oprtr
//     sum operator+(const sum& p) {
//         sum tem p; 
//         temp.x = x + p.x  ;
//         temp.y = y + p.y ;
//         return temp ;
//     }
// } ; 

// int main() 
// {
//     sum p1(5, 6) ; 
//     sum p2(3, 4)  ;  
//     sum p3(3 , 0) ;

//     sum p3 = p1 + p2 ; 

//     cout << "Result : ("  << p3.x << ", " << p3.y << ")" <<endl; 
//     return 0 ;
// }




// EX3 
// class Product{
//     public : 
//     int A , B ;  

//     Product( int a = 0 , int b = 0 ) 
//     {
//         A = a ; 
//         B = b ;
//     }

//         //..overloading
//     Product operator*(const Product& p) 
//     {
//         Product temp ; 
//         temp.A = A * p.A ; 
//         temp.B = B * p.B ;  
//         return temp ;
//         }

// } ;


// int main() 
// { 
   
//     Product p1(2,2) ; 
//      Product p2(1,4) ; 
//       Product p3(4,7) ;   

//     p3 = p1*p2 * p3 ; 

//     cout << p3.A << " and " << p3.B ; 
// }
 




//EX4 
// class Equal
// {
//     public : 
//     int X, Y ;  
    
//     Equal(int x = 0 , int y = 0) 
//     {
//         X = x ;
//         Y = y ;
//     } 

//     //overload 
//     bool operator==(const Equal& e) 
//     {
//         return (X == e.X && Y == e.Y) ;
//     }
// } ;

// int main() 
// {
//     Equal e1(3,4) ; 
//     Equal e2(3,4) ; 
//     Equal e3(9,4) ; 
     
//     if (e1 == e2)
//     {
//         cout << "both objects are equal p1 & p2 !!" ; 
//     } 
//     else {
//         cout << "Both objects are not equal !" ; 
//     } 

// cout  << endl ; 

//     if (e2 == e3)
//     {
//         cout << "both objects are equal p2 n p3 !!" ; 
//     } 
//     else {
//         cout << "Both objects are not equal p2 n p3!" ; 
//     }
// }





//Unary Opearator 
// class Distance 
// { 
//     public : 
//     int feet  , inch ; 

//     Distance(int feet = 0 , int inch = 0) 
//     {
//         this->feet = feet ; 
//         this->inch = inch ;
//     } 

//     int operator+() 
//     {
//         feet = feet + 1 ; 
//         inch = inch + 1 ; 
//         return feet , inch ;
//     } 


    
// }  ; 

// int main() 
// {
//     Distance d1(10,20) ; 
//     +d1 ; 

//     cout << d1.feet << " and " << d1.inch ; 

// }
 






//TYPE CONVERSION 
//EX1 

//Implicit 
// int main() 
// {
//     int intValue = 5 ; 
//     double doubleValue  = intValue ;  

//     cout << "Integer value: " << intValue << endl ; 
//     cout << "type of value:  " << typeid(intValue).name() << endl ;  //intger - i 

//     cout << "double value: " << doubleValue << endl ;
//     cout << "type of value: " << typeid(doubleValue).name() << endl ;  //double - d

//     int x = 10 ; 
//     char y = 'a' ; 
//     x = x + y  ;    // 10 + 97 ; 
//     float z = x + 1.0 ; 

//     cout << "x = " << x << endl 
//          << "y = " << y << endl  
//          <<  "z = " << z << endl ; 
// }


//overloading + implicit 

//EX2 
// class Fraction{
//     public : 
//     int numerator ; 
//     int denominator ; 

//     Fraction(int num, int denom) : numerator(num) , denominator(denom){}  

//     Fraction operator+(int intValue) 
//     {
//         return  Fraction(numerator + intValue * denominator , denominator) ;
//     }

//     void display 
//     {
//         cout  << numerator << "/" << denominator << endl ; 
//     }

// } ; 


// int main() 
// {
//      Fraction frac(3, 4); // Represents 3/4

//     // Implicit conversion: int 1 is converted to Fraction
//     Fraction result = frac + 1; // This works due to operator overloading

//     cout << "Result of addition: ";
//     result.display(); // Expected: (3 + 1*4) / 4 = 7/4
//     return 0;


// } 







//basic type to class type 
// class Conversion
// {
//     int meters ;  
//     string str ;

//     public : 

//     //constructor 
//     Conversion(int m) 
//     {
//     meters = m  ;
//     } 
    
//     Conversion(string s) 
//     {
//         str = s ;
//     }
    
    
//     void display() 
//     {
// cout << "Distance: " << meters << " meters" <<endl ; 
// cout << "Name : " << str << endl; 

//     }

// };

// int main () 
// {
//     int btype_dist = 50 ; 
//     string bytpe_name = "john" ;  

//     Conversion obj1 = btype_dist ; 
//     obj1.display()  ; 
    

//     Conversion obj2 =  bytpe_name ; 
//     obj2.display () ; 


//     //check 
//     cout << "type of bytpe: " << typeid(btype_dist).name()<< " and " << 
//     " type of ctype is : "  << typeid(obj2).name() << endl ;
// } 





//class to basic type 
// class Fraction 
// {
  
//   public: 
//   Fraction(int num , int denom )
//   {
//     numerator = num ; 
//     denominator = denom ;
//   }

//     operator double() const{
//         return static_cast<double>( numerator) / denominator ;
//     } 


//       private : 
//   int numerator ; 
//   int denominator ;
 

// } ; 

// int main() 
// {
//     Fraction f(3,4) ; 
//     double result = f ;  // conversion opeartor is called
// cout << result  << endl ; 
// }  



//static cast 
int main() 
{ 

int a, b ; 
double c ;  
a = 5 , b = 2 ;  
c = a /  b ;
cout << c << endl ;   // int / int = int


c = static_cast<double>(a) / b ; 
cout << c << endl;      // double / int = double

c = static_cast<double>(a) / static_cast<double>(b) ; 
cout << c << endl;       // double / double =  double
 
}
