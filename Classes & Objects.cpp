/*
                                  Classes & Objects

>> The only difference between class and structures is that, all the members in structure are public by default 
and all the members in class are private by default.

>> If we just remove the Class keyword and replace it with struct, it would still work the same due the backwards
compatibility btw cpp & c

*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
  
  private:
  int a,b;
  
  public:
  
  void set_data(int x, int y){
    a=x;b=y;
  }
  
  void show_data(){
    cout<<"a-> "<<a<<" "<<"b-> "<<b<<endl;
  }
};

int main(){
  
  Complex c1; // 4/8 byte Memory block ( Objects only allocates memory, not classes (Blueprints )
  
  c1.set_data(3,4); // Member functions
  
  c1.show_data();   // Member functions  ( Noun.Verb Noun ==> object , Verb ==> Action being performed )
  
  /*
      cout<<C1.a<<endl; // it would not work because they are not public member variables
  */
  
}
