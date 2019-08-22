#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
ll n;cin>>n;
ll a[n+1];
for(ll i=1;i<=n;i++)
cin>>a[i];
ll c=1;
stack<ll> s;
for(ll i=1;i<=n;i++)
{
s.push(a[i]);
while((!s.empty()) && (c==s.top()))
{
c++;
s.pop();
}
}
if(!s.empty())
cout<<"Sad"<<endl;
else
cout<<"Happy"<<endl;
}