// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=1;
//     do
//     {
//         printf("%d",i);
//         i++;
//     } while (i<=5);
    
//     return 0;
//}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=10;
    t:
    printf("%d\n",i);
    i-=2;
    if (i<101){
        goto t;
    }
    return 0;
}
