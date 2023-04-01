#include <iostream>
#include <vector>
using namespace std;
vector<int> dynamicArray(int n, vector<vector<int>> queries);
int main(){
    // taking inputs
    int n, q, i = 0, num;
    vector<vector<int>> queries;
    vector<int> query;
    cin>>n;
    cin>>q;

    for(; i < q; i++){
        for(int j = 0; j < 3; j++){
            cin>>num;
            query.push_back(num);
        } queries.push_back(query);
    }
    // outputs the results of type 2 queries
    query = dynamicArray(n, queries);
    for(i = 0; i < query.size(); i++){
        cout<<query[i]<<" ";
    }

}

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    // 2D array of n empty arrays
    vector<vector<int>> vec(n);
    for(int i = 0; i < queries.size(); i++){
        
    }
}
