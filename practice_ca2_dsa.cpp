#include <iostream> 
#include <stack>
using namespace std ; 

// int main() {
  
//   stack<int> s ; 
//   s.push(10) ;
//   s.push(20) ;
//   s.push(30) ;
//   s.push(40) ; 

//   while(!s.empty())   // loop --> stack is not empty -- >true
//   {
    
//     cout << s.top() << endl ; 
//     s.pop() ;
//   } 

//   cout << "stack is empty now ! , nothing to pop" << endl ;
// }





///custom stack
/*  


class Stack {
  int top ; 
  int capacity ; 
  int* arr ;  


 
 public : 

 Stack(int size){ 
  capacity = size ;  
  arr = new int[capacity] ;
  top = -1 ;
 }


//push 
void push(int elem) {

  if(top >= capacity) 
  {
    cout << "stack overflow , capacity is only : " << capacity << endl ;
  } 

  else{
  top = top  + 1 ;      
  arr[top]  = elem ;  
  cout << elem << " pushed into the stack." << endl;
  } 

}


//pop
int pop(){
  if(top < 0) 
  {
    cout << "stack is empty ! , nthng to remove" ; 
    return -1 ;
  }

  else{
   int elem = arr[top]; 
   top = top - 1 ;
            return elem ;
  }
}


int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }
 
  bool isEmpty() {
        return (top < 0);
    }

} ;


int main() 
{
  Stack s(5) ;  

  s.push(10) ; 
  s.push(20) ;
  s.push(30) ; 

  
  cout << "Top element is: " << s.peek() << endl;  
  cout << s.pop() << " popped from the stack." << endl; 
  cout << "Top element is: " << s.peek() << endl;  

cout << s.pop() << " popped from the stack." << endl; 
 cout << "Top element is: " << s.peek() << endl;  
}






//queue 
#include <queue>  


// int main() 
// {
//   queue<int>q ; 

//   q.push(10) ;
//   q.push(20) ;
//   q.push(40) ;
//   q.push(50) ;
//   q.push(90) ;  

//   while(!q.empty()){
//   cout <<  "front elemt : " << q.front()  << endl ;
//   cout << q.front() << " is removed" << endl ;
   
//   q.pop();
//   } 

//   cout << "queue is empty now !" << endl ;

// }





//Create a Queue 
// Enqueue an element.
// Dequeue an element.
// Check if the queue is empty.
// Check if the queue is full. 
 
 /*

void enqueue(queue<int> &q, int n){

  q.push(n) ; 
  cout << n << " is pushed " << endl ;

}

void dequeue(queue<int> &q){

  
  if(q.empty())
  {
    cout << "empty que. nothinh to pop" ;
  } 
  else{
  q.pop() ;  
        if(!q.empty()) 
        {
        cout << "Front elemet after deque : " << q.front() <<endl;
        }
        else{
        cout << "Queue is now empty" << endl ;
        }
}
}
int main() 
{

  queue<int> q ; 
  
  enqueue(q,10) ;
  enqueue(q,20) ; 
  enqueue(q,30) ; 

  dequeue(q) ;
  dequeue(q) ;
  dequeue(q) ;
}


*/




//queue using 2 stacks 


/*  

class QueueUsingStacks{
  private : 
  stack<int> stack1 ; 
  stack<int> stack2 ; 


  public : 
   
   void enqueue(int x) 
   {
    stack1.push(x) ;
   }


   void dequeue()  
  {

    if (stack2.empty()){ 

      if (stack1.empty()){
      cout << "queue is empty !" << endl ; 
      } 

      while(!stack1.empty()) 
      {
        stack2.push(stack1.top()) ; 
        stack1.pop() ;
      }

    } 

    cout << "Dequed : " << stack2.top() << endl ; 
    stack2.pop() ;


  } 
 

void front()  {

  if (stack2.empty()){ 
     if (stack1.empty()) { 
       cout << "Queue is empty!" << endl;
                return;
     } 

     while (!stack1.empty()) {
      stack2.push(stack1.top()) ; 
      stack1.pop() ;
      }
     }
cout << "Front element is  : " << stack2.top() << endl ;


} ; 


int main() 
{
  QueueUsingStacks q ; 


  q.enqueue(10) ;  
  q.enqueue(20) ;
  q.enqueue(30) ;
  q.enqueue(40) ;

q.front() ; 
q.dequeue() ; 


q.front() ; 
} 


*/








//prblm  
/*
#include <iostream>
#include <queue>
using namespace std;

class SimpleQueue {
private:
    queue<int> q;

public:
    // Enqueue operation
    void enqueue(int element) {
        q.push(element);
        cout << "Enqueued: " << element << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (q.empty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << q.front() << endl;
            q.pop();
        }
    }

    // Get the front element of the queue
    void getFront() {
        // Implement this part

cout << "front element is : " << q.front() << endl ;

    }

    // Get the size of the queue
    void getSize() {
      cout << "Size of queue : " <<q.size() ; 
    }

    // Check if the queue is empty
    void isEmpty() {
        cout << "queue is empty" ;
    }
};

int main() {
    int n;
    cin >> n;
    SimpleQueue sq;

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

        if (command == "enqueue") {
            int element;
            cin >> element;
            sq.enqueue(element);
        } else if (command == "dequeue") {
            sq.dequeue();
        } else if (command == "getFront") {
            sq.getFront();
        } else if (command == "getSize") {
            sq.getSize();
        } else if (command == "isEmpty") {
            sq.isEmpty();
        }
    }

    return 0;
}
 

 */ 






//prblm

/* 

#include <iostream>
#include <stack>
using namespace std;

class QueueUsingTwoStacks {
private:
    stack<int> s1, s2;

public:
    // Enqueue operation
    void enqueue(int x) {
        s1.push(x);
        cout << x << " enqueued in stack1" << endl; 
    }

    // Dequeue operation
    void dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue is empty" << endl;
        } else {
            // Implement this part to print and remove the front element
            cout << "front element  : " << s2.top() << endl; 
            s2.pop() ;
        }
    }

    // Get the front element of the queue
    void getFront() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (s2.empty()) {
            cout << "Queue is empty" << endl;
        } else {
            // Implement this part to print the front element without removing it
            cout << "front element is : " <<s2.top() ; 
        }
    }

    // Check if the queue is empty
    void isEmpty()
    {
        // Implement this part
        if (s2.empty() && s1.empty())
        {
            cout << "1" << endl;
        }
        else
        {
            // cout << "queue is empty !" << endl ;
            cout << "0" << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    QueueUsingTwoStacks queue;

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

        if (command == "enqueue") {
            int element;
            cin >> element;
            queue.enqueue(element);
        } else if (command == "dequeue") {
            queue.dequeue();
        } else if (command == "getFront") {
            queue.getFront();
        } else if (command == "isEmpty") {
            queue.isEmpty();
        }
    }

    return 0;
}

*/ 






//prblm 

/* 

#include <iostream>
#include <queue>
using namespace std;

class TicketReservationSystem {
private:
    queue<int> passengers;

public:
    // Reserve a ticket for a passenger
    void reserve(int passenger_id) {
        passengers.push(passenger_id);
        // Implement this part to confirm reservation 
        cout << "Passenger " << passenger_id << " reserved." << endl ;

    }

    // Serve the front passenger
    void serve() {
        if (passengers.empty()) {
            cout << "No passengers to serve" << endl;
        } else {
            // Implement this part to serve the passenger and dequeue
            
                cout << "current passenger served : " << passengers.front() << endl  ;
                passengers.pop() ;
            
        }
    }

    // Show the front passenger
    void front() {
        if (passengers.empty()) {
            cout << "No passengers" << endl;
        } else {
            // Implement this part to show the front passenger 
               cout << "current passenger which has to be served : " << passengers.front() ;
        }
    }

    // Check if the queue is empty
    void isEmpty() {
        if (passengers.empty()) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }
};

int main() {
    int n;
    cin >> n;
    TicketReservationSystem system;

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

        if (command == "reserve") {
            int passenger_id;
            cin >> passenger_id;
            system.reserve(passenger_id);
        } else if (command == "serve") {
            system.serve();
        } else if (command == "front") {
            system.front();
        } else if (command == "isEmpty") {
            system.isEmpty();
        }
    }

    return 0;
}

*/ 




//prblm 

/* 
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class BrowserHistory {
private:
    stack<string> history;
    string current_page; // Current page URL

public:
    // Visit a new URL
    void visit(string url) {
        // Implement this part to handle the current page
 if (!current_page.empty()) {
            history.push(current_page); // Store the current page in history
        }
        current_page = url; 

        // Print this to confirm the visited page
        cout << "Visited " << url << endl;
    }

    // Go back to the previous page
    void back() {
        // Implement this part to go back and set the current page  
        if(!history.empty()){
        current_page = history.top();
        history.pop() ;  
        cout << "Back to " << history.top() << endl ;
        } 
        else {
        cout << "No previous page" << endl; 
        }
    }

    // Show the current page
    void current()
    {
        // Implement this part to show the current page
               if (current_page.empty()) {

        {
            cout << "No page currently open" << endl;
        }
        else
        {
                        cout << "Current page: " << current_page << endl;

        }
    }

    // Check if history is empty
    void isEmpty() {
        // Implement this part to check if the history is empty 
        if(!history.empty() && current_page.empty(){
        cout << "1" << endl; // If empty 
        } 
        else{ 
        cout << "0" << endl; // If not empty 
        }
    }
};

int main() {
    int N;
    cin >> N; // Number of operations
    BrowserHistory browser;

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;

        if (command == "visit") {
            string url;
            cin >> url;
            browser.visit(url);
        } else if (command == "back") {
            browser.back();
        } else if (command == "current") {
            browser.current();
        } else if (command == "isEmpty") {
            browser.isEmpty();
        }
    }

    return 0;
}



*/ 



//prblm  

/*  

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class ExpressionEvaluator {
private:
    stack<int> nums; // Stack to hold numbers

public:
    // Push a number onto the stack
    void push(int number) {
        // Implement this part to push a number onto the stack


    nums.push(number) ;
    cout << number << " pushed onto the stack." << endl;
    }

    // Evaluate the operation
    void evaluate(string operation) {
        // Implement this part to evaluate the operation
        if (operation ==  "+") 
        {
            int sum = 0 ;
            sum = sum  + nums.top() ;
            nums.pop() ; 
            sum = sum + nums.top() ;
            nums.pop() ;
            nums.push(sum) ;
            cout << "result of this operation: "<< nums.top()<< endl; 
        }

         if (operation ==  "*") 
        {
            int prod = 1  ;
            prod = prod * nums.top() ; 
            nums.pop() ; 
            prod *= nums.top()  ;
            nums.pop() ;
            nums.push(prod) ;
             cout << "result of this operation: "<< nums.top()<< endl; 
        }
        // Print the result of the operation
    }

    // Get the current result from the top of the stack
    void getResult() {
        // Implement this part to return the result
        if (!nums.empty()) 
        {
            cout << "Cureent result from stack: " << nums.top()  << endl ;
        } 
        else{
            cout << "stack is empty !" << endl  ;
        }
    }

    // Check if the stack is empty
    void isEmpty() {
        // Implement this part to check if the stack is empty
        if (nums.empty()) 
        {
             cout << "stack is empty !" ; 
        }
        else {
            cout << "Stack is not empty!" << endl;
        }
    }
};

int main() {
    ExpressionEvaluator evaluator;
    int n;
    cin >> n; // Number of operations

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;

        if (command == "push") {
            int number;
            cin >> number;
            evaluator.push(number);
        } else if (command == "evaluate") {
            string operation;
            cin >> operation;
            evaluator.evaluate(operation);
        } else if (command == "getResult") {
            evaluator.getResult();
        } else if (command == "isEmpty") {
            evaluator.isEmpty();
        }
    }

    return 0;
}


*/ 
 







//binary tree

//create binary treee

/* 


struct Node {
    int data ; 
    Node* left ;
    Node* right ; 


    Node(int value){ 
        data = value ; 
        left  = right = nullptr ;
    }
} ;  

int main() {

    Node* root = new Node(1) ;
    root->left = new Node(2) ;
    root->right = new Node(3) ;
    root->left->left = new Node(4) ; 
    root->left->right = new Node(5) ;
    root->right->left = new Node(6) ;
    root->right->right = new Node(7) ; 

 //  //printing the tree
  cout << "Root: " << root->data << endl ;
  cout << "Left child of root : " << root->left->data << endl ;
  cout << "Right child of root : " << root->right->data << endl ;
  cout << "Left child of node 2: " << root->left->left->data << endl;
  cout << "Right child of node 2: " << root->left->right->data << endl;
  cout << "Left child of node 3: " << root->right->left->data << endl ;
  cout << "Right child of node 3: " << root->right->right->data << endl ;


}


*/ 


//using user input 
// struct Node{
//     int data ; 
//     Node* left ; 
//     Node* right ; 

//     Node(int value) 
//     {
//     data = value ;
//     left = right = nullptr ;  

//     }
// } ;


//preorder 

/*

void preOrder(Node* Node) 
{
    if(Node == nullptr) 
    {
        return ;
    }
    cout << Node->data << " " ;
    preOrder(Node->left) ; 
    preOrder(Node->right)  ; 
}




int main() 
{
    
Node* root = new Node(10) ; 
root->left = new Node(12) ; 
  root->right = new Node(14) ;  
  root->left->left = new Node(15)  ; 
  root->left->right = new Node(13) ; 
 

cout << "preorder traversal of binary tree is: \n" ; 
preOrder(root) ;


    
}

*/



/*  
// inorder 
struct Node{
    int data ; 
    Node* left  ; 
    Node* right ; 


    Node(int value) 
    {
        data = value ; 
        left = right = nullptr ;
    }
} ;

void inOrder(Node* node) 
{
if (node == nullptr) 
{
    return ;
} 

inOrder(node->left) ;
cout << node->data <<" " ; 
inOrder(node->right) ; 

}


void postOrder(Node* node) 
{
    if(node==nullptr)
    {
       return ; 
    }

postOrder(node->left) ;
postOrder(node->right) ; 
cout << node->data << " " ; 
}

int main() 
{ 

Node* root = new Node(10) ; 
root->left = new Node(12) ; 
  root->right = new Node(14) ;  
  root->left->left = new Node(15)  ; 
  root->left->right = new Node(13) ; 
 

cout << "preorder traversal of binary tree is: \n" ; 
inOrder(root) ;

cout << "\npostorder traversal of binary tree is: \n" ;  
postOrder(root) ;
}


*/