#include <stdio.h>
int cube(int x);
int main(){
	int r,x;
    printf("Enter num: ");
	scanf("%d",&x);
    r = cube(x);
	printf("Cube of the given number:%d",r);
	
}
int cube(int x){
	return x*x*x;
}
