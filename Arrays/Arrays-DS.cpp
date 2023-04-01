#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> a){
    for(int i = 0; i < size(a) / 2; i++){
        int temp = a[i];
        a[i] = a[size(a) - 1 - i];
        a[size(a) - 1 - i] = temp;
    }
    return a;
}

int main(){
    int numOfInts, num, i = 0;
    vector<int> ints;
    cin>>numOfInts;
    for(; i < numOfInts; i++){
        cin>>num;
        ints.push_back(num);
    }
    ints = reverseArray(ints);
    for(i = 0; i < size(ints); i++){
        cout<<i<<"th element of the vector is "<<ints[i]<<endl;
    }
}