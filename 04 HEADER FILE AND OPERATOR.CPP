// HEADER FILE AND OPERATOR

// THERE ARE TWO TYPES OF HEADER FILE
// 1- SYSTEM HEADER FILE : COMES WITH COMPILER
    #include<iostream>
// 2- USER DEFINED HEADER FILE : DEFINED BY US
    // #include<hkv.h> ------ it produces error because hkv.h should be present in the current folder

    // NOTE:- CPP REFERENCE LIBRARY HEADER FILE ON GOOGLE FOR STANDARD LIBRARY FILES OF CPP

    // NOTE: \n or endl CAN BE USED FOR NEW LINE

    // OPERATORS

    using namespace std;

    int main()
    {
        int a=4, b=9;
        cout<<"Operators in c++"<<endl;
        cout<<"Types Of OPERATORS"<<endl;
        // 1-Airthmetic Operators
        cout<<"Value Of a+b is "<<a+b<<endl;
        cout<<"Value Of a-b is "<<a-b<<endl;
        cout<<"Value Of a*b is "<<a*b<<endl;
        cout<<"Value Of a/b is "<<a/b<<endl;
        cout<<"Value Of a%b is "<<a%b<<endl;
        cout<<"Value Of a++ is "<<a++<<endl;
        cout<<"Value Of a-- is "<<a--<<endl;
        cout<<"Value Of ++a is "<<++a<<endl;
        cout<<"Value Of --a is "<<--a<<endl;

        // 2-ASSIGNMENT OPERATOR ------- use to assign the value to variables
             // int a=4,b=9;    // here we are assigning value 4 to a and 9 to b
            // char d='d';     // here we are assigning d character to the d variable

        // 3-RELATIONAL OR COMPARISON OPERATOR

        cout<<"The Value Of a==b is "<<(a==b)<<endl;
        cout<<"The Value Of a!=b is "<<(a!=b)<<endl;
        cout<<"The Value Of a>=b is "<<(a>=b)<<endl;
        cout<<"The Value Of a<=b is "<<(a<=b)<<endl;
        cout<<"The Value Of a>b is "<<(a>b)<<endl;
        cout<<"The Value Of a<b is "<<(a<b)<<endl;

        // 4-LOGICAL OPERATORS

        cout<<((a==b) && (a<b))<<endl; // logical And
        cout<<((a==b) || (a<b))<<endl; // logical Or
        cout<<(!(a==b))<<endl;         // logical Not

        return 0;
    }
