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
#include <stdio.h>
char wwf[105];  
int current
int taut(int i) {  
    char ch = wwf[current++];  
    if(ch=='p' || ch=='q'|| ch=='r' || ch=='s' || ch=='t') return (i>>(ch-'p'))&1;//返回该元素值  
    else if(ch=='K') return taut(i) & taut(i);  
    else if(ch=='A') return taut(i) | taut(i);  
    else if(ch=='N') return  taut(i);  
    else if(ch=='C') return ( taut(i)) | taut(i);  
    else if(ch=='E') return taut(i) == taut(i);  
    else return 0;  
}  
  
int main() {  
    int flag;  
    while(scanf("%s",wwf)==1 && wwf[0]!='0') {  
        flag = 1;         
        for(int i=0; i<32; i++) {  
            current = 0;  
            if( taut(i)) {  
                flag = 0;  
                break;  
            }  
        }  
        if(flag) printf("tautology");  
        else printf("not");  
    }  
    return 0;  
}  
```

