// Today i am learing about Operators in c++:-

// Operators means To perform a task on a single or double Variables.

// Starting With Constant Keyword:-
#include <iostream>
using namespace std;
//In this block WE USE constant keyword
int const a=10;
int main(){
cout<<a;
return 0;
}

IN this Block we are using TYPE CASTING: means convertion of data from one type to another in that there are two types
A] implicit function
B] Explicit function

NOTE :- Bool>char>int>float>double

int main(){
   cout<<'A'+ 1 <<endl; 
   return 0;
}
//here A=65 has taken because we are converting char to integer
 cout<<10+9.99;
 cout<<(int)('A' + 1); 
//output is 66
// Because in line number 27 we defined cout as int so Output is in Integer form.
   
//eg:
   cout<<(bool)3+2; //output will be 3 beacuse 3 will be convert in boolen and it is 1

Now, We Studing with Operators:-

There are mainly Five Types of Operators:-
A) arithmatic 
b) Assigment
C) REALATIONAL 
D) logical 
E) BITWISE


A) ARITHMATIC operator:
1) Binary(need double operant):-                2)unary(need single operant):-
a)add(+)                                        a)increment (++)
b)subs(-)                                       b)decrement(--)
c)multiple(*)
d)divide(/)
e)module(%)


B) ASSIGNMENT OPEARTORS (=,+=,-=,*=,/=
// a) (=)
//    a=5 means 5 is store in a
// b) (+=)
//    a = a+5
//    we can write it as a+=5   
// c) (-=)
//    a = a-5
//    we can write it as a-=5
// d) (*=)
//    a = a*5
//    we can write it as a*=5   
// e) (/=)
//    a = a/5
//    we can write it as a/=5   


C) REALTIONAL OPERATORs (=,<=,==,!=,<,>) 


D) LOGICAL OPERATORS (AND OR NOT)
a) AND:- 
if both are true then output is true
#include <iostream>
using namespace std;
int main(){
    cout<<((5<10) && (5<7)); 
  // here both are true so output is true
    return 0;
} 

b) OR in this is one is true output is true
#include <iostream>
using namespace std;
int main(){
    cout<<((5>10) || (5<7));
    return 0;
} 
// here output is true

c) NOT(!):- It change the value is output is true the it will give false
#include <iostream>
using namespace std;
int main(){
 cout<<(!(5==10)<<endl;  
  //output is false but by using ! output will be true
 return 0;
}
