#include <stdio.h>
int swap(int,int);
int main(){
	int r,x,y;
    printf("Enter num1: ");
	scanf("%d",&x);
    printf("Enter num2: ");
	scanf("%d",&y);
    printf("Number before swap %d%d\n",x,y);
    
    r = swap(x,y);
	printf("Number after swap%d%d\n",r,x);
	
}
int swap(int x,int y){
	//int ;
    return y ;
}
