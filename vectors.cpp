#include <iostream> 
#include <vector> 
#include <algorithm>
using namespace std; 


//syntax 
//vector<data type> name ;




// int main()
// {
// vector<int> nums_arr({1,2,4,5}) ; 

// for (int i = 0 ; i < nums_arr.size() ; i++)
// {
//     cout << nums_arr[i] << endl ;
// }


// vector<int>v ; 
// v.push_back(10) ; 
// v.push_back(20) ; 
// v.push_back(30) ; 
// v.push_back(40) ; 

// for (int i = 0 ; i < v.size() ; i++)
// {
//    cout << v[i] << endl ;
// }

// for (int i = v.size()-1; i >= 0; i--)
// {
//     cout << v[i] << endl ;
//     v.pop_back() ;
// }


// }




//take input usiNG VECTOR 
/*


int main()
{
    vector<int>nums ; 

    int n ; 
    cout << "enter the size of vector : "  << endl ; 
    cin >> n ; 

cout << "enter elements: " << endl ;
    for (int i = 0; i < n ; i++)
    {
        int elements ; 
         cin >> elements ;
       nums.push_back(elements) ;
    } 


    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << endl ;
    }
    
}

*/






//prblm 
/*
input the number of elements in the vector from the user.
Input the elements of the vector.
Calculate and display the sum of all the elements in the vector.
Find and display the maximum and minimum elements in the vector.
Sort the elements in ascending order and display the sorted vector.
*/



int main() 
{ 
    vector<int>nums ; 

    int n ; 
    cout << "enter the no. of elements u want to enter : " << endl; 
    cin >> n ; 

    for (int i = 0; i < n; i++)
    {
        int elements ;
        cin >> elements ;
        nums.push_back(elements);
    }


    int sum = 0 ; 
    for (int i = 0; i < n; i++)
    {
     sum = sum + nums[i] ; 
    }
    
    //maxm n minm 
    int maxm = nums[0] ;
    for (int i = 0; i < n; i++)
    {
     if(maxm < nums[i+1]) 
     {
        maxm = nums[i+1] ;
     }   
     else{
        maxm = maxm ;
     }
    }

     int minm = nums[0] ;
    for (int i = 1; i < n; i++)
    {
     if(nums[i] < minm) 
     {
        minm = nums[i] ;
     }   
     else{
        minm = minm ;
     }
    }


    cout << sum <<endl;
    cout << maxm << endl;
    cout << minm << endl; 
    
//to sort the vector 
sort(nums.begin() , nums.end()) ; 
for (int i = 0; i < n; i++)
{
       cout << nums[i] << " "; 
}


}