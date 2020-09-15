#include<bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int a;
        string s,ss;
        cin >> a>>s;
        for (int i=0;i<a;i++){
            ss+=s[2*i];
        }
        cout<<ss<<endl;
    }
    return 0;
}
