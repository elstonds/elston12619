#include <bits/stdc++.h>
using namespace std;
int main()
{int n;cin>>n;
int *arr=new int[n];
int temp;
for(int i=0; i<n; i++){
cin>>temp;arr[i]=temp;}
sort(arr,arr+n);
for(int i=1; i<n; i++)
{if(arr[i]-arr[i-1]>0)
{arr[i-1]=0;}
else
{int j=i-1;
while(j>=0){
if(arr[j]!=0&&arr[i]-arr[j]>0){
arr[j]=0;break;}
else
j--;}}}
int sum=0; for(int i=0; i<n; i++) {if(arr[i]!=0)
sum=sum+arr[i];
}
cout<<sum;
return 0;}