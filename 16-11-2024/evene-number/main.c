/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,limit;
    printf("enter the limit : ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    
}
    return 0;
}
