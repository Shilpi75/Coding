//spoj DCEPC504 - The Indian Connection


#include<iostream>
#include<math.h>
using namespace std;
long long n,t,i,j,k,total;
long long find(long long k)
{
    long long ans=0;
    if(k==1)
    return 1;
    if(k==2)
    return 2;
    if(k%2!=0)
    {
        ans=find((k+1)/2);
        return ans;
    }
    else
    {
        ans=find(k/2);
        if(ans==1)
        return 2;
        else
        return 1;
    }
}
int main()
{

    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    total=1;
  //  for(i=0;i<n-1;i++)
 // total*=2;

    int answer=find(k);
    if(answer==1)
    cout<<"Male";
    else
    cout<<"Female";
    if(t!=0)
    cout<<"\n";
    }

}
