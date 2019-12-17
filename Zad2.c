#include<stdio.h>
int suma(int a)
{
    int wynik=0;
    do
    {
        wynik=wynik+a%10;
        a=a/10;
    } while (a!=0);
    return wynik;
}
int main()
{
    for(int i=0; i<900; i++)
    {
        if(suma(i)>10 && i%9==0)
        {
            printf("%d\n", i);
        }
    }
}