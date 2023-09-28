#include<stdio.h>
#include<math.h>
int main(){
    double x1, x2, x3, y1, y2, y3, a, b, c, p, s;
    printf("dot 1=");scanf("%lf %lf", &x1, &y1);
    printf("dot 2=");scanf("%lf %lf", &x2, &y2);
    printf("dot 3=");scanf("%lf %lf", &x3, &y3);
    a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    p=a+b+c;
    s=sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c));
    printf("p=");printf("%lf\n",p);
    printf("s=");printf("%lf",s);
return 0;
}