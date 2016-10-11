//Codeforces 670B-Game Of Robots

#include <iostream>
using namespace std;
int  main()
{
	long long n,t,i,j,a[100006],k;
	cin>>n>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=1;i<=n;i++)
	{
	    if(k-i>i)
	    k=k-i;
	    else
	    break;
	}
	cout<<k<<" "<<a[k-1];
 
 
}