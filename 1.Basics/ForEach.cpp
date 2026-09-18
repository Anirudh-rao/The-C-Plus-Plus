//
// Created by Rookr on 18/09/26.
//
#include<iostream>
using namespace  std;

int main()
{
    int arr[] = {1,2,3,4,5};
    cout<<"Iteraring by value"<<endl;
    for (auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // By reference
    cout << "Iterating with reference" << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    cout<<endl;
    return 0;
}