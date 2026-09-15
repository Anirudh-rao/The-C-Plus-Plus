//
// Created by Rookr on 15/09/26.
//
#include<iostream>
using namespace  std;

int main()
{
    int age ;
    cout<<"Enter your age:\n";
    cin>>age;

    if (age < 13)
    {
        cout<<"Child";
    }
    else if (age >= 1 and age<= 18)
    {
        cout<<"Growing Kid";
    }
    else
    {
        cout<<"HOLLI SHEET!Adult";
    }

    return 0;
}