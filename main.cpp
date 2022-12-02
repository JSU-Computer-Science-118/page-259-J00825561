// Page 259 - Quadratic Equation

Root of Quadratic Equation

## Program Description:
The roots of the quadratic equation `ax^2 +bx + c = 0`, a != 0 are given by the following formula. 
If a == 0, your program should output `Invalid entry`.

![quadratic equation](https://user-images.githubusercontent.com/32272045/200133496-7f43131c-ed7a-40c0-ae55-92c9a8518272.png)

In this formula, the term `b^2-4ac` is called the **discriminant**. 
If `b^2-4ac` = 0 , then the equation has a single (repeated) root. 
If `b^2-4ac` > 0 , the equation has two real roots. 
If `b^2-4ac` < 0 , the equation has two complex roots. 

Write a program that takes as input the value of `a` (the coefficient of 
x^2 ), `b` (the coefficient of x), and `c` (the constant term) and **outputs the type of roots of the equation**. 
Your input is going to be `a`,`b`,and `c` respectively.

Furthermore, if `b^2-4ac` >= 0 , the program should output the roots of the quadratic equation. 
(Hint: Use the function pow from the header file cmath to calculate the square root. Chapter 3 explains how the function pow is used.)
```cpp
// Xavier Thompson J00825561 November 16th, 2022 
#include <iostream>

using namespace std; 

int main()
{         
int a,b,c;
cout << "enter a,b,c,";
cin >> a >> b >> c;
if(b*b-4*a*c==0)
{
cout << "roots are" << (-1*b/2*a) << endl;
}
else if(b*b-4*a*c<0)
cout << "The equation has complex roots" << endl;
    return 0;
}
