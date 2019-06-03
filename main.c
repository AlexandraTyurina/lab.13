#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct ip{
unsigned a:8;
unsigned b:8;
unsigned c:8;
unsigned d:8;
}IP;
IP Pr_IP(IP p){
IP res;
res.b = p.b;
res.c = p.c;
res.d = p.d;
res.a = rand() % 9 + 127;
return res;
}
int main()
{
int a,b,c,d;
IP p;
srand(time(NULL));
scanf("%d.%d.%d.%d", &a, &b, &c, &d);
p.a = a;
p.b = b;
p.c = c;
p.d = d;
p = Pr_IP(p);
printf("%d.%d.%d.%d",p.a, p.b, p.d, p.c);
return 0;
}
