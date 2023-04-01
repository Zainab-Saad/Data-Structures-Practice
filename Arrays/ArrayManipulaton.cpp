#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries);
int main(){
    int vectorSize, numOfOperations, num;
    vector<vector<int>> operations;
    vector<int> eachOperation;
    // inputs
    cin>>vectorSize;
    cin>>numOfOperations;
    for(int i = 0; i < numOfOperations; i++){
        for(int j = 0; j < 3; j++){
            cin>>num;
            eachOperation.push_back(num);
        }operations.push_back(eachOperation);
        eachOperation.clear();
    }

    // output
    cout<<arrayManipulation(vectorSize, operations);
    return 1;
}



long arrayManipulation(int n, vector<vector<int>> queries){

    // TC --> O(q) + O(n)
    vector<long> vec(n, 0);
    long maximumNum = vec[0];
    int i = 0;
    // run the loop queries number of times
    for(; i < queries.size(); i++){
        vec[queries[i][0]- 1] += queries[i][2];
        if((queries[i][1]) < n)
            vec[queries[i][1]] -= queries[i][2];
    }
    // apply prefix sum technique
    for(i = 0; i < n; i++){
        if(!(i == 0))
            vec[i] += vec[i-1];
        if(vec[i] > maximumNum) 
            maximumNum = vec[i];
        }
    
    return maximumNum;
}

/**
 * @brief TC = O(q*n) --> quadratic
 * 
 *
 * for(int i = 0; i < queries.size(); i++){
        for(int j = queries[i][0] - 1; j <= queries[i][1] - 1; j++){
            vec[j] += queries[i][2];
            if(vec[j] > maximumNum) maximumNum = vec[j];
        }
    }
 * 
 */