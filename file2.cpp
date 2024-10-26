#include <iostream> 
#include <fstream> 
using namespace std ;


/* 
 

//storing numbers in another file 
int main() {
    ifstream fin ; 

    //to open 
    fin.open("Text.txt")   ;

    //to read 
    char c  ; 
    c = fin.get() ;

//to write  in another file 
    while(!fin.eof()) 
    {
        cout << c; 
        c = fin.get() ;
    } 


//close file 
    fin.close() ;
}


*/ 



int main() {

    ifstream fin ;
    fin.open("Text.txt") ;

    string line ;  
    cout << "your details from another file : " << endl; 
    while(getline(fin, line))
    {
        cout << line << endl ;
    }

    fin.close() ; 

    cout << "details of the file over !!!"  ; 

}