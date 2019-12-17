#include<stdio.h>
int funkcja(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    while(a==b){
        printf("Liczby muszą być różne. Podaj inne :\n");
        scanf("%d", &a);
        scanf("%d", &b);
     }
    for(int i=0; i<6; i++)
    {
        printf("%d",funkcja(a,b));
    }
}