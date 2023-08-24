// REFERENCE VARIABBLE AND TYPECASTING

#include<iostream>
using namespace std;

int c=10; // c declared globally

int main()
{
    // BUILT IN DATATYPES------------------------------


    int c=8; // c declared locally in main function
    
    cout<<"The Value Of C in Local is "<<c<<endl; // it gives the value of c in local function 
    cout<<"The Value Of C in Global is "<<::c;    // :: used to primt the value in global function

    // LITERALS ----------------------------------------

    float d=6.7f;           // f is used to pass it as a float value
    long double f=6.7l;     // l is used to pass it as a long double value 

    cout<<"The Value of d is "<<d<<endl<<"The Value of f is "<<f<<endl;

    cout<<"The Size Of 6.7 is"<<sizeof(6.7)<<endl;
    cout<<"The Size Of 6.7f is"<<sizeof(6.7f)<<endl;
    cout<<"The Size Of 6.7F is"<<sizeof(6.7F)<<endl;
    cout<<"The Size Of 6.7l is"<<sizeof(6.7l)<<endl;
    cout<<"The Size Of 6.7L is"<<sizeof(6.7L)<<endl;

    // REFERENCE VARIABLES--------------------------------

    float hey = 98;          //Main Variable
    float & hello = hey;    // Reference Variable
    cout<<hey<<endl;
    cout<<hello<<endl;

    // Typecasting----------------------------------------

    float m=4.89;
    cout<<"The value of m is "<<m<<endl;            // normal way
    cout<<"The value of m is "<<(int)m;           // conversion from float to int
    cout<<"The value of m is "<<int(m);           // second way for conversion from float to int

    return 0;

}