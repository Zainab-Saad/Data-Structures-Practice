#include <iostream>
using namespace std;
// constant pointers
// pointers to constant
// constant pointers to constant

void constantPointers();
void pointersToConstants();
void constantPointersToConstants();
int main(){
    int arr[5];
    cout<<arr[10];
    cout<<"jello";
    //pointersToConstants();
}

void constantPointers(){
    int var, var1, *const ptr_var = &var, *const*ptr_ptr_var;
    *ptr_var = 100;
    ptr_ptr_var = &ptr_var;
    cout<<var<<" "<<ptr_var<<" "<<ptr_ptr_var<<endl;
    ptr_ptr_var = NULL;
    cout<<var<<" "<<ptr_var<<" "<<ptr_ptr_var;    
    //ptr_var = &var1; invalid
    // **ptr_ptr_var = &var1; invalid
}

void pointersToConstants(){
    const int var = 10, var2 = 20, *ptr_var, *ptr_var2, *const*ptr_ptr_var;
    ptr_var = &var;
    ptr_var = &var2;
    ptr_var2 = &var2;
    
    //*ptr_var = -100; invalid
    ptr_ptr_var = &ptr_var;
    cout<<ptr_ptr_var<<endl;
    // *ptr_ptr_var = &var2;
    ptr_var2 = &var;
    cout<<ptr_ptr_var<<endl;
}

void constantPointersToConstants(){
    int a = 10, b = 20;
    const int*const ptr_varA = &a, *const ptr_varB = &b;
    cout<<a<<" "<<ptr_varA<<endl;
    cout<<b<<" "<<ptr_varB<<endl;
    a = -100;
    b = -200;
    cout<<a<<" "<<ptr_varA<<endl;
    cout<<b<<" "<<ptr_varB<<endl;
    // since a and b are not declared constant thus their value can be changed by the data variable itself
    // but cant be changed by dereferencing the ptr variable
    // *ptr_varA = -1000;
    // *ptr_varB = -2000;
    // cout<<a<<" "<<ptr_varA<<endl;
    // cout<<b<<" "<<ptr_varB<<endl;


}