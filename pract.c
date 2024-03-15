// #include<stdio.h>
// #include<math.h>
// int main(int argc, char const *argv[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < i ; j++)
//         {
//            printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     FILE *fp1 = fopen("a1.txt","r");
//     char p;
//     while (!feof(fp1))
//     {
//         p=fgetc(fp1);
//         printf("%c",p);
//     }
    

//     return 0;
// }

// To write a file
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     FILE *fp1 = fopen("a1.txt","w");
//     fprintf(fp1,"Ranjan c");
    

//     return 0;
// }
 
//  To copy a file
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     FILE *fp1 = fopen("a1.txt","r");
//     FILE *fp2 = fopen("b1.txt","w");
//     char t;
//     while (1)
//     {
//         t=fgetc(fp1);
//         if (t==EOF) break;
//         fputc(t,fp2);
//     }
//     fclose(fp2);
//     fclose(fp1);

//     return 0;
// }

#include<stdio.h>
struct student 
{
    int Roll;
    char Name[20];
    float Cgpa;
};
int main(int argc, char const *argv[])
{
    struct student S[2]={
        {1296,"PR",93},
        {1463,"*PRT",6.5}
    };
    FILE *fp = fopen("aa","wb");
    fwrite(S,sizeof(struct student),2,fp);
    fclose(fp);

    return 0;
}
