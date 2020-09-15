#include<bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
    int a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    long long int aa = a-min(a-x, n);
    long long int bb = b-min(b-y, n-min(a-x,n));
    long long int cc = b-min(b-y,n);
    long long int dd = a-min(a-x,n-min(b-y,n));
    cout<<min(aa*bb,cc*dd)<<endl;
}
return 0;
}
