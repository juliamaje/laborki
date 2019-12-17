#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    while(n>20){
        printf("Podaj licczbe mniejsza od 20");
        scanf("%d", &n);
    }while(n>20);
    int c=0;
    int tab1[n];
    tab1[0]=3;
   for(int i=1; i<n; i++)
   {
      tab1[i]=tab1[i-1]+3;
   }
    for(int i=0; i<n; i++)
    {
        printf("%d\n", tab1[i]);
    }
    
}