#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
vector<int> rotateLeft(int d, vector<int> arr);

int main(){
    // input ....
    int sizeOfArray, rotations, num, i = 0;
    cin>>sizeOfArray;
    cin>>rotations;
    vector<int> arr;
    for(; i < sizeOfArray; i++){
        cin>>num;
        arr.push_back(num);
    }

    arr = rotateLeft(rotations, arr);
    // output ....
    for(i = 0; i < sizeOfArray; i++)
        cout<<arr[i]<<" ";
    return 1;
}
vector<int> rotateLeft(int d, vector<int> arr) {
    // run the loop d number of times
    while(d > 0){
        int firstElement = arr[0];
        copy(arr.begin() + 1, arr.end(), arr.begin());
        arr[size(arr)-1] = firstElement;
        d--;
    }
    return arr;
}


/**
 * int temp1 = arr[size(arr)-1], temp2;
        for(int j = size(arr) - 1; j >= 0; j--){
            if(j == 0){
                arr[size(arr)-1] = temp1;
                continue;
            }
            temp2 = arr[j - 1];
            arr[j-1] = temp1;
            temp1 = temp2;
        }
        d--;
 * 
 */