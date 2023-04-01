#include <bits/stdc++.h>
using namespace std;
vector<int> matchingStrings(vector<string> stringList, vector<string> queries);
int main(){
    int n, q, i = 0;
    vector<string> stringList, queries;
    string input;
    // inputs...
    cin>>n;
    for(; i < n; i++){
        cin>>input;
        stringList.push_back(input);
    }
    cin>>q;
    for(i = 0; i < q; i++){
        cin>>input;
        queries.push_back(input);
    }
    
    // output...
    vector<int> occurences = matchingStrings(stringList, queries);
    for(i = 0; i < occurences.size(); i++)
        cout<<occurences[i]<<endl;
    return 1;
}

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    // initialize the occurence of each query to zero
    vector<int> occurences(queries.size(), 0);
    int occur = 0;
    for(int i = 0; i < queries.size(); i++){
        for(int j = 0; j < stringList.size(); j++){
            if(queries[i] == stringList[j])
                occur++;
        }
        occurences[i] = occur;
        occur = 0;
    }
    return occurences;

}