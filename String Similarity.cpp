#include<bits\stdc++.h>
using namespace std;

int main(){
    int t,n;
    string s,ss;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>s;
        //ss[n];
        for (int j=0; j<n; j++){
            ss[j]=1;
        }
        int m;
        while(m < 2*n-1){
        for (int k=0;k<k+n;k++){
            if (ss[k] != s[k]){
                ss[k] = s[k];
            }
        }
        m++;
        }
      cout<<ss;
    }
    return 0;
}
