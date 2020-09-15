#include<i>

using namespace std;

int main()
{
    int a,b,n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
        int diff = a-b;
        int count = 0;
        if (a==b){
            cout<<0<<endl;
            continue;
        }
        else if(abs(a-b)<=10){
            cout<<1<<endl;
            continue;
        }
        else{
                while (diff!=0){
                if (diff>0){
                    if (diff>10){
                    a = a-10;
                        diff = a-b;
                    }
                    else{
                        a = a-diff;
                        diff = a-b;
                    }

                    count+=1;
                }
                else{
                    if (diff<-10){
                        a = a+10;
                        diff = a-b;
                    }
                    else{
                       a = a-diff;
                       diff = a-b;
                    }
                    count+=1;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}


//*******************************************//

#include<bits\stdc++.h>
using namespace std;
int main()
{
    long int a,b,n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>a>>b;
       long int diff = abs(a-b);
       long int count = 0;
        if (a==b){
            cout<<0<<endl;
        }
        else if(abs(a-b)<=10){
            cout<<1<<endl;
        }
        else{
             count=diff/10;
             if(diff%10!=0)
                    count=count+1;
        cout<<count<<endl;}
    }
    return 0;
}
