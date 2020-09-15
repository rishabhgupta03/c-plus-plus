#include<bits\stdc++.h>
using namespace std;

void Insertion(int A[],int n)
{
 int i,j,x;

 for(i=1;i<n;i++)
 {
 j=i-1;
 x=A[i];
 while(j>-1 && A[j]>x)
 {
 A[j+1]=A[j];
 j--;
 }
 A[j+1]=x;
 }
}
int main()
{
    int n,i;
    cin>>n;
 int A[n]={0};
 for (i=0;i<n;i++){
    cin>>A[i];
 }

 Insertion(A,n);

 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");

 return 0;
}
