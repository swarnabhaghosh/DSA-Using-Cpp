#include <iostream>
#include <cstdlib> //   for Exit
#include <string>  //    for Strings
using namespace std;
int main()
{
    // int a, b, c;
    // b=123;
    // cout<<b;

    // string str="swarnabha"; // new datatype "string"
    // cout<<str;

    // camelCase notation
    // int marksInMath=98;
    // cout<<marksInMath;
    // as in the var marksInMath, I and M is in caps, when i write mim, by camelcase notation it detects the variable name from its short form

    // int a;
    // short b;
    // long c;
    // long long d;

    /*
    float x=45.32; // less precision
    double y=45.32; // more than float
    long double z=45.32; // more than double
    */

    /*
    float const score=89;
    // score=90; const value can't be re-assigned
    cout<<score;
    */

    /*
    cout<<"enter the number:";
    int x;
    cin>> x;
    cout<<"the number is:"<<x;
    */

    /*
    int a, b;

     cout<<"Enter first number:";
     cin>>a;

     cout<<"Enter second number:";
     cin>>b;

     cout<<"Sum of 2 numbers:"<<a+b<<"\n";
     cout<<"Diff of 2 numbers:"<<(a-b)<<"\n";
     cout<<"Absolute Diff of 2 numbers:"<<abs(a-b)<<"\n"; // abs()for integers, fabs() for floting numbers
     cout<<"Product of 2 numbers:"<<a*b<<"\n";
     cout<<"Quotient of 2 numbers:"<<a/b<<"\n";
     cout<<"Remainder of 2 numbers:"<<a%b<<"\n";
     cout<<"Division result (in Decimals) of 2 numbers:"<< (float) a/b<<"\n"; //typecasting
    */

    /*
    // typecasting

    int a = 5;
    float b = 2.5;
    float result1 = a + b;  // 'a' is implicitly converted to float
    cout<<"Result1"<<result1;

    // syntax=> (type)value
    int a = 10, b = 3;
    float result2 = (float)a / b;  // forces float division, result = 3.33
    cout<<"Result2"<<result1;

    char ch = 'A';
    int ascii = (int)ch;  // explicit cast: ascii = 65

    */

    // logical and bitwise operator

    /*
    int num1=8, num2=9;

    cout<<"logical and => a&&b = "<< (num1&&num2) << endl; // as both are non zero so o/p=1
    cout<<"logical or => a||b = "<< (num1||num2) << endl; // as one of them orboth are non zero so o/p=1
    cout<<"bitwise and => a&b = "<< (num1 & num2) << endl; // 1000 * 1001 =1000 = 8
    cout<<"bitwise or => a|b = "<< (num1|num2) << endl; // 1000 + 1001 =1001 = 9
    cout<<"equality operator => a==b = "<< (num1==num2) << endl; // 8==9 = 0
    cout<<" not equal operator => a!=b = "<< (num1!=num2) << endl; // 8!=9 = 1
    */

    // Conditional Statement syntax
    /*
     int age;
     cout<<"Enter your age:"<<endl;
     cin>>age;

     // conditional statement
     if (age > 150 || age < 1){
         cout<<"Invalid age"<<endl;
     }else if(age >= 18){
         cout<<"You can vote"<<endl;
     }else{
         cout<<"You can't vote"<<endl;
     }
    */

    /*
    // Switch Case
    // Calculator program
    cout << "Enter two numbers: ";
    int a, b, choice;
    cin >> a;
    cin >> b;

    while(1){
        cout << "\n1 for addition" << endl
             << "2 for subtraction" << endl
             << "3 for multiplication" << endl
             << "4 for division" << endl
             << "5 for exit" << endl
             << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout<<"Sum is= "<<a+b;
                break;
            case 2:
                cout<<"Difference is= "<<a-b;
                break;
            case 3:
                cout<<"Product is= "<<a*b;
                break;
            case 4:
                if(b==0)
                    cout<<"ZeroDivisionError";
                else
                    cout<<"Division result is= "<< (float)a/b;
                break;
            case 5:
                exit(0);
                break;
            default:
                cout<<"Invalid input";
                break;
        }
    }
    */

    // Loops
    /*
   //~~While loop
   int index=0;
   while(index<10){
       cout<<"We are at index: "<<index<<endl;
       index++;
   }
   */
    //~~For Loop
    /*
    for(int i=0; i<10; i++){
     cout<<"We are at index: "<<i<<endl;
    }
     return 0;
     */

    //  ~~ Array and 2d Array are same as in c
    //  String:
   /*
    string name = "Swarnabha";
    cout << "My name is " << name << endl;
    cout << "length of my name is " << name.length() << endl;
    cout << "Substring " << name.substr(0, 6); // will start from 0 and go upto 6 characters after that, and in case the 2nd parameter is greater than string length, it will return the full string
   */
}