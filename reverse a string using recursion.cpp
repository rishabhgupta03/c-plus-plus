#include<bits\stdc++.h>

using namespace std;

void revastr(string s){
    if (s.size() == 0){
        return;
    }
    revastr(s.substr(1));
    cout<<s[0];
}

int main(){
    string s;
    getline(cin, s);
    revastr(s);
    return 0;
}
