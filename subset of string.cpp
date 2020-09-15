#include<bits\stdc++.h>
using namespace std;

void printsub(string str, string current = "",int index = 0)
{
    if (index==str.length()){
        cout<<current<<" ";
        return;
    }
    printsub(str, current, index+1);
    printsub(str, current+str[index], index+1);
}

int main()
{
    printsub("RISHABH");
    return 0;
}
