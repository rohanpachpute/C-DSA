Today, learing loops in C++.

Loop means doing the repeated work.
There are mainly three Types of Loops:-
1) for loop 
2) while loop
3) do-while loop     

In For loop first we initialize then we give condition and at last we increment.
// Let's Understand Loops by doing some Examples:-
//Examples Of For loops:-
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 5;
    // Printing numbers from 1 to n
    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Printing numbers from n to 1 (reverse order)
    for(int i=n; i>0; i--) {
        cout << i << " ";
    }
    cout << endl;

    // Printing Sum of first N natural numbers
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum = sum + i;
        cout << sum <<endl;
    }
    return 0;
}

    int sum = 0;                   // Initialize sum to 0
    for(int i=1; i<=n; i++) {      // Loop from 1 to n
    sum = sum + i;             // Add current value of i to sum
    cout << sum << endl;       // Output the current value of sum
}
return 0;                      // Return 0 to indicate successful execution

    // Square Pattern using For Loop
    for(int i=1; i<=4; i++) {
        cout << "****" << endl;
    }

    // Ex:- Sum of Digits of a Number
    int digitSum = 0;
    int num = 12345;
    while(num > 0) {
        digitSum += num % 10;
        num /= 10;
    }
    cout << "sum of digits = " << digitSum << endl;

    // Ex:- Sum of Odd Digits of a Number
    int oddDigSum = 0;
    int num = 12345;
    while(num > 0) {
        int lastDig = num % 10;
        if(lastDig % 2 != 0) {
            oddDigSum += lastDig;
        }
        num /= 10;
    }
    cout << "sum of odd digits = " << oddDigSum << endl;

    // Ex:- Print a number's Digits in Reverse
    int num = 12345;
    
    while(num > 0) {
        cout << num % 10 << " ";
        num /= 10;
    }
    cout << endl;

    // Ex:- Reverse the given number & print the result
    int num = 12345;
    int res = 0;
    while(num > 0) {
        int lastDig = num % 10;
        res = res * 10 + lastDig;
        num /= 10;
    }
    cout << res << endl;


    // Solution 2 (slightly better) : #include <cmath>
    isPrime = true;
    for(int i=2; i<=sqrt(num); i++) {
        if(num % i == 0) {
            isPrime = false;
            break;
        }
    }
    cout << isPrime << endl;
    return 0;
}

// Example of While loop:-

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int n;
    while(i<=n);{
    cout<< "typing five times" <<endl; 
    i++;
    cout<<  "enter your value"<<endl;
    cin>> n;
    return 0;
       
    }

       cout << endl;
       return 0; 
}