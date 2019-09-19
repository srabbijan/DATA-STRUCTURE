#include<bits/stdc++.h>
using namespace std;

 struct STAK
 {
     int top;
     int ST[100];
 };

 void PUSH( STAK *s, int iteam)
 {
     if(s->top<100)
     {
         s->ST[s->top]= iteam;
         s->top++;
     }
     else
        printf("STACK FULL\n");
 }

 int pop(STAK *s)
 {
     if(s->top)
        {
            s->top--;
           return s->ST[s->top];
        }
        else
        {
            printf("STAK EMPTY\n");
            exit(0);
        }
 }

 int main()
 {
     STAK s;
     s.top=0;

     PUSH(&s,10);
     PUSH(&s,15);
     PUSH(&s,7);

     printf("%d\n",pop(&s));
     printf("%d\n",pop(&s));
     printf("%d\n",pop(&s));
     printf("%d\n",pop(&s));
 }
