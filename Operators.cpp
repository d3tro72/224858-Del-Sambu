#include <iostream>
using namespace std;

int main()
{

    //Variable declarations
    int num1 = 16, num2 = 4;

    //ARITHMETIC/MATHEMATICAL Operators
    cout << "ADDITION:" << num1 << " + " << num2 << " = " << num1 + num2 << endl; // ADDITION:5 + 3
    cout << "SUBTRACTION:" << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "MULTIPLICATION:" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "DIVISION:" << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << "Modulus:" << (num1 % num2) << endl;
    cout << "Increment:" << (++num1) << endl; //pre-increment
    cout << "Increment:" << (num1++) << endl; //post-increment
    cout << "Decrement:" << (--num2) << endl; //pre-decrement
    cout << "Decrement:" << (num2--) << endl; // post-decrement
    cout << "combined increment and assignment: num1 += 2>; " << (num1 += 2) << endl;
    cout << "combined decrement and assignment: num2 -= 2>; " << (num2 -= 2) << endl;
    cout << "combined multiplication and assignment: num1 *= 2>; " << (num1 *= 2) <<endl;
    cout << "combined division and assignment: num2 /= 2>; " << (num2 /= 2) << endl;
    cout << "combined modulus and assignment: num1 %= 2>; " << (num1 %= 2) << endl;
    
    //COMAPRISON/LOGISTICAL OPERATIONS
    cout << "3>2" << " = " << (3 > 2) << endl;
    cout << "3<2" << " = " << (3 < 2) << endl;
    cout << "4>=3" << " = " << (4 >= 3) << endl;
    cout << "3==3" << " = " << (3 == 3) << endl;
    cout << "!(4>=3)" << " = " << !(4 >= 3) << endl;

    //Boolean OPERATORS
    
