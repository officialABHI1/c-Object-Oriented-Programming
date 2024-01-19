/*
  This program is also a description of the concept of passing an object as a parameter and returning an object
*/

#include<bits/stdc++.h>
using namespace std;

class Complex{
  
  private:
  int a,b;
  
  public:
  void set_data(int, int);
  
  void show_data(){
    cout<<"a-> "<<a<<" "<<"b-> "<<b<<endl;
  }
  
  Complex add(Complex c){
    
    Complex temp;
    
    temp.a = a+c.a;  // temp.a(assigning into another object variable) = a(member function can directly access the variables of the caller obj.) +c.a ( variable of c2)
    temp.b = b+c.b;
    
    return (temp);
    
  }
};

 void Complex::set_data(int x, int y){
    a=x;b=y;
 }

int main(){
  
  Complex c1,c2,c3; // 4/8 byte Memory block
  
  c1.set_data(3,4); // Member functions
  
  c2.set_data(5,6); // Member functions
  
  c3   = c1/* caller obj*/.add(c2);  // c1 is calling add() function by passing c2 as parameter( argument is also complex type) and assinging in c3 ( return type complex )

  /*
    We can also do something like c3 = c2+c1 but for that we have to overload the '+' operator for the Complex type operands
  */
  
  c3.show_data();   // Member functions

}
