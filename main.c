#include <stdio.h>

int main() {
    char y;
    char x;
    int a;
    int b;
    printf("enter your first charechter: ");
    scanf(" %c",&y);
    printf(" %c : ",y);
    scanf("%d",&a);
    printf("enter your second charechter: ");
    scanf(" %c",&x);
    printf(" %c: ",x);
    scanf("%d",&b);
   if (y=='y'|| x=='x'){
        y=a;
        x=b;
       int anwser=y+x*x/y+x;
        printf("the anwser is :%d",anwser);
    }






    return 0;
}
