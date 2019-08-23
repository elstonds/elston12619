#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k,x=0;
cin>>n>>k;
vector<int> stck;
while(n--)
{
int y;
cin>>y;
while(!stck.empty()&&x<k&&stck.back()<y)
{
stck.pop_back();
x++;
}
stck.push_back(y);
}
while(x<k)
{
stck.pop_back();
x++;
}
for(int i=0;i<stck.size();i++)
cout<<stck[i]<<" ";
cout<<endl;
}
}