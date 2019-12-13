#include<iostream>
#include<cmath>
#include<cstring>
 
using namespace std;
struct node{
	int start;
	int end;
}p[205];
 
int main()
{
	int t,n,i,s,e,j,sum,a[500],max;
	cin>>t;
	while(t--)
	{
		cin>>n;
		max=-1;
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
		{
			cin>>s>>e;
			if(s>e)
			swap(s,e);
			
			s=(s+1)/2;
			e=(e+1)/2;
			
			p[i].start=s;
			p[i].end=e;
			
			for(j=p[i].start;j<=p[i].end;j++)
			{
				a[j]++;
				if(a[j]>max)
				max=a[j]; 
			 } 
		}
		
		cout<<max*10<<endl;
	}
	return 0;
}