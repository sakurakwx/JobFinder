#include <stdio.h>
bool S(int x){
    if(3 < x < 5) return 1;
}

int main(void)
{   
     int a = 9 ;
     printf("%d,%d\n", a, S(a)); 
     return 0;
}