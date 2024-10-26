#include <iostream> 
#include <fstream>   
#include <algorithm>
#include <vector>
using namespace std ;
 

/*

int main() 
{
    ofstream fout ; 
    
    //to opea a file 
    fout.open("Text.txt") ;

    //write file 
    fout << "hello india" ; 

    //.close 
    fout.close() ;
}


 */




/*

int main()  {

    vector<int>arr(5) ;  
    cout << "enter the elems: " << endl ;
    for (int i = 0; i < arr.size(); i++)
    {
      cin >> arr[i] ;
    }
    

    ofstream fout ;
    fout.open("Text.txt") ;

    //sort and then writ in file 
    sort(arr.begin() , arr.end()) ; 

    for (int i = 0; i < 5; i++)
    {
       fout << arr[i] << " " ;
    } 

    //close 
    fout.close() ;
    

}


*/ 



int main ()  { 

    ofstream fout ;   
    fout.open("Text.txt") ;

    string name , addrss ; 
    cout << "enter ur name : \n" ;  
    getline(cin,name) ;

    cout << "enter ur addrs : \n" ; 
    getline(cin ,addrss) ;

    //write 
    fout << "name : " << name <<endl  ;
    fout << "addrss : " << addrss << endl; 


    //close 
    fout.close() ;

}