/*

Important things to note about Member Functions:

1. Member functions can access all the members of object calling it.

2. Member function can access all the member of their class

3. Member functions can be defined outside the class following two restrictions :

  a. Member function should be declared inside the class body 

  b. Member function should be defined outside the class using membership label

Note: The only difference between defining inside & outside is that :

>> Inside defined M.F are inline in nature by default however M.F defined outside has to be 
inline explicitly using the inline keyword

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
};

 void Complex::set_data(int x, int y){   //  Complex:: --> Membership Lable [ Classname+ scope resolution opr (::) ]
    a=x;b=y;
 }

int main(){
  
  Complex c1; // 4/8 byte Memory block
  
  c1.set_data(3,4); // Member functions
  
  c1.show_data();   // Member functions

}
