#include<iostream>
#include<time.h> 
#include <chrono>
using namespace std;
int factorial = 1;
int factorialIterative(int n){
    for(int i = 2; i <= n; i++)
        factorial *= i;
    return factorial;
}

int factorialRecursive(int n){
    if (n == 1)
        return 1;
    return n * factorialRecursive(n-1);
}

int main(){  
    int n = 50000;
    auto start = chrono::high_resolution_clock::now();
  
    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);
    
    int factorialIter = factorialIterative(n);
    auto end = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    double time_taken = 
      chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;

    cout<<"Time taken n = "<<n<<" for iter is "<<time_taken<<" sec"<<endl;


    auto start1 = chrono::high_resolution_clock::now();

    int factorialRecur = factorialRecursive(n);
    auto end1 = chrono::high_resolution_clock::now();

    // Calculating total time taken by the program.
    double time_taken1 = 
      chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count();
    time_taken1 *= 1e-9;

    cout<<"Time taken n = "<<n<<" for recur is "<<time_taken1<<" sec"<<endl;
}



