#include <bits/stdc++.h>
using namespace std;
int hourglassSum(vector<vector<int>> arr);
int main(){
    // 6 by 6 array/vector of int
    vector<vector<int>> array2D;
    vector<int> array1D; int num;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
        cin>>num;
        array1D.push_back(num);
        }
        array2D.push_back(array1D);
    }
    cout<<hourglassSum(array2D);
}

int hourglassSum(vector<vector<int>> arr) {
    // outer loop - 4 times
    // inner loop - 4 times
    // declare the first hourglass sum as maximum
    int maximum = arr[0][0] + arr[0][1] + arr[0][2]
              + arr[1][1]
              + arr[2][0] + arr[2][1] + arr[2][2];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == 0 && j == 0) continue;
            maximum = max(maximum, arr[i][j] + arr[i][j+1] + arr[i][j+2]
                        + arr[i+1][j+1]
                        + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2]);
            cout<<maximum<<endl;
        }
    }
    return maximum;
}