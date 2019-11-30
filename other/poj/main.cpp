#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
#include<functional>
using namespace std;

const int maxn=200020;
const double far=1e10;

struct sit{
	double x, y;
	int mark;
};

sit p[maxn];

bool compare(sit a,sit b){
	return a.x<b.x;
}

double dis(sit a, sit b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

double mindis(int l,int r,int n){
	if(l>=r) return far;
	if(r==l+1){
		if(p[l].mark==p[r].mark){
			return far;
		}else return dis(p[l], p[r]);
	}
	int mid=(l+r)/2;
	double d1=mindis(l, mid, n);
	double d2=mindis(mid+1, r, n);
    double d=min(d1,d2);
	for(int i=l; i<=r; i++){
		if(p[i].mark!=p[mid].mark)
		d=min(d, dis(p[mid], p[i]));
	}
	return d;
}

int main()
{
	int T;
	double x, y;
	scanf("%d", &T);
	while(T--){
		int n;
		scanf("%d", &n); 
		for(int i=0;i<n;i++){
			scanf("%lf%lf",&x,&y);
			p[i]=(sit){x,y,0};
		}
		for(int i=n;i<n+n;i++){
			scanf("%lf%lf",&x,&y);
			p[i]=(sit){x,y,1};
		}
		sort(p,p+2*n,compare);
    	double  kk=mindis(0,2*n-1,2*n);
		printf("%.3f\n",kk);
	}
	return 0;
}