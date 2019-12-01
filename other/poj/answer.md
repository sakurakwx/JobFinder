#1.poj 1000

```c++
#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
    return 0;
```

# 2.poj1005

```c++
#include <stdio.h> 
//#include <math.h>
//#define PI acos(-1)
int main(void){
    int nums = 0;
    int i = 0;
    scanf("%d\n",&nums);
    float a[20];
    float b[20];
    for(;i<nums;i++){
        scanf("%f %f",&a[i],&b[i]);
    }
    i = 0;
    while(nums--){
        
        float jud = (a[i]*a[i]+b[i]*b[i])*3.1415926/2;
        int year = int(jud)/50 + 1;
        printf("Property %d: This property will begin eroding in year %d.\n",i+1,year);
        i+=1;
    }
    printf("END OF OUTPUT.");
    return 0;
}
```



#3.poj1753

```c++
#include <iostream>
using namespace std;

bool samecolor();
void flip(int i);
bool b_tree(int i);
int getTimes();
void search();

int tf[16] ;
int sq[4][4];
int times = -1;

int main(){
    char temp;
    for (int i = 0;i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> temp;
			if (temp == 'b')
				sq[i][j] = 1;
			else
				sq[i][j] = 0;
		}
	}
    
    search();
    if (times == -1)
	{
		cout << "Impossible" << endl;
	}
    else
	{
		cout << times << endl;
	}

}

void search()
{
	tf[0] = 0;
	flip(0);
	b_tree(1);

	tf[0] = 1;
	flip(0);
	b_tree(1);
}

int getTimes(){
    int curtime = 0;
    for(int i=0;i<16;i++){
        if(tf[i] == 0){
            curtime +=1;
        }
    }
    return curtime;
}

bool b_tree(int i){//i为搜索层数
    if (i == 16)
	{
		if (samecolor())
		{
			if (times == -1)
				times = getTimes();
			else
			{
				int tempTime = getTimes();
				times = tempTime < times ? tempTime:times;
			}
			return true;
		}
        else
			return true;
	}

	tf[i] = 0;
	flip(i);
	b_tree(i+1);
	tf[i] = 1;
	flip(i);
	b_tree(i+1);
    return 1;
}

void flip(int i){
    int n = i/4;
    int m = i%4;
    sq[n][m] = (sq[n][m] ==1)? 0:1;
    if (m != 0){
        sq[n][m-1] = (sq[n][m-1] ==1)? 0:1;
    }
    if (n != 0){
        sq[n-1][m] = (sq[n-1][m] == 1)? 0:1;
    }
    if (m != 3){
        sq[n][m+1] = (sq[n][m+1] ==1)? 0:1;
    }
    if (n != 3){
        sq[n+1][m] = (sq[n+1][m] == 1)? 0:1;
    }
}

bool samecolor(){
    for(int i = 0;i <= 3;i++){
        for(int j = 0;j <= 3;j++){
            if(sq[i][j] != sq[0][0]) return false;
        }
    }
    return true;
}

```

#4.poj3295

```c++
#include <iostream>
#include <string>
using namespace std;
string wwf;  
int current;
int flag;
int taut(int i) {  
    char ch = wwf[current++];  
    if(ch=='p' || ch=='q'|| ch=='r' || ch=='s' || ch=='t'){
        return (i>>int (ch-'p'))&1;
    }  
    else if(ch=='K') return taut(i) & taut(i);  
    else if(ch=='A') return taut(i) | taut(i);  
    else if(ch=='N') return !taut(i);  
    else if(ch=='C') return (!taut(i)) | taut(i);  
    else if(ch=='E') return taut(i) == taut(i);  
    else return 0;  
}  
  
int main() {
    while(cin >> wwf && wwf[0]!='0') {  
        flag = 1;
        for(int i=0; i<32; i++) {  
            current = 0;  
            if(!taut(i)) {  
                flag = 0;  
                break; 
            } 
        }
        if(flag) cout << "tautology" << endl;  
        else cout << "not" << endl; 
    }

    
        
    
    return 0;  
}  
```



# 5.poj2366

```c++
#include <iostream>
using namespace std;
const int N=5e4+10;
int fir[N];
int sec[N];
int main(){
    int first,second;
    cin >> first;
    for(int i = 0;i< first ;i++){
        scanf("%d",fir+i);
    }
    cin >> second;
    for(int i = 0;i< second ;i++){
        scanf("%d",sec+i);
        sec[i] = 10000 - sec[i];
    }
    for(int i = 0;i< first;i++){
        int flag = 0;
        for(int j = flag;j< second;j++){
            if (fir[i] == sec[j]){
                cout << "YES" << endl;
                return 1;
            }
            if (sec[j] > fir[i]) {
                flag = j-1;
                break;
                }
    }
    }
    cout << "NO" << endl;
    return 1;
}
```



# 6.poj2503

```c++
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,string>dic;
    string s1,s2,s;
    char str[15];
    while(gets(str)&&str[0]!='\0')
    {
        s1=s2="\0";
        int i;
        for(i=0;;i++)
            if(str[i]==' ')
            {
                str[i]='\0';
                break;
            }
        s1+=str;
        s2+=str+i+1;
        dic[s2]=s1;
    }
    while(cin>>s)
    {
        if(dic[s].size())
            cout<<dic[s]<<endl;
        else
            cout<<"eh"<<endl;
    }
    return 0;
} 
```



# 7.poj3714

```c++
#include<iostream>
#include<cstring>
#include<algorithm>
#include<math.h>
#include<functional>
using namespace std;

const int maxn=200020;

int T;
double x, y;

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
	if(l>=r) return 1e10;
	if(r==l+1){
		if(p[l].mark==p[r].mark){
			return 1e10;
		}else return dis(p[l], p[r]);
	}//
	int mid=(l+r)/2;//取中点
	double d1=mindis(l, mid, n);
	double d2=mindis(mid+1, r, n);
    double d=min(d1,d2);
	for(int i=l; i<=r; i++){
		if(p[i].mark!=p[mid].mark)//如果两点不属于同一阵容则返回
		d=min(d, dis(p[mid], p[i]));
	}
	return d;
}

int main()
{
	cin >> T;
	while(T--){
		int n;
        cin >> n;
		for(int i=0;i<n;i++){
			cin >> x >> y;
			p[i].x=x;
            p[i].y=y;
            p[i].mark=0;//录入坐标
		}// 发电站
		for(int i=n;i<2*n;i++){
			cin >> x >> y;
			p[i].x=x;
            p[i].y=y;
            p[i].mark=1;//录入坐标
		}// 士兵
		sort(p,p+2*n,compare);//按照从小到大排序
    	double  res=mindis(0,2*n-1,2*n);
		printf("%.3f\n",res);
	}
	return 0;
}
```



# 8.poj3233

```c++

```

