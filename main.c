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




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ip{
unsigned a:1;
unsigned b:1;
unsigned c:1;
unsigned d:1;
unsigned e:1;
unsigned f:1;
unsigned g:1;
unsigned h:1;
}IP;
IP charswitch (IP p1)
{
    p1.a=1;
    p1.b=1;
    p1.c=0;
    return p1;
}
int main()
{
int a,b,c,d;
IP p4;
scanf("%d.%d.%d.%d", &a, &b, &c, &d);
p4.h = a%2;
printf ("%i\n", a%2);
a=a/2;
p4.g = a%2;
printf ("%i\n", a%2);
a=a/2;
p4.f = a%2;
printf ("%i\n", a%2);
a=a/2;
p4.e = a%2;
printf ("%i\n", a%2);
a=a/2;
p4.d = a%2;
printf ("%i\n", a%2);
a=a/2;
p4.c = 0;
a=a/2;
p4.b = 1;
a=a/2;
p4.a = 1;
a=a/2;
p4 = charswitch (p4);
a=2*(2*(2*(2*(2*(2*(2*p4.a+p4.b)+p4.c)+p4.d)+p4.e)+p4.f)+p4.g)+p4.h;
printf("%d.%d.%d.%d",a, b, c, d);
return 0;
}
