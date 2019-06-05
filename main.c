#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ip{
unsigned a:8;
unsigned b:8;
unsigned c:8;
unsigned d:8;
}IP;
int charswitch (int a)
{
    a=a^(1<<7);
    a=a^(1<<6);
    a=a^(0<<5);
    return a;
}
int main()
{
int a,b,c,d;
IP p;
scanf("%d.%d.%d.%d", &a, &b, &c, &d);
p.b = b;
p.c = c;
p.d = d;
p.a = a;
p.a = charswitch (a);
printf("%d.%d.%d.%d",p.a, p.b, p.c, p.d);
return 0;
}
