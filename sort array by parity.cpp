#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> A = {3,4,2,5,2,5,25,7,3};
    vector<int> result;
    for (int i = 0; i< A.size(); i++){
        if(A[i] % 2 == 0){
            result.push_back(A[i]);
        }
    }
    for (int j = 0; j < A.size(); j++){
        if (A[j] % 2 != 0) {
            result.push_back(A[j]);
        }
    }
    for (int i = 0 ; i<result.size(); i++){
        cout<<result[i]<<",";
    }
    return 0;
};
