#include <stdio.h>
#define PI 3.14
#define N 2
#define M N+3

void variable_size(){
    short s;
    int i;
    long l;
    char c;
    float f;
    double d;

    printf("short size= %d\n", sizeof(s));
    printf("int size= %d\n", sizeof(i));
    printf("long size= %d\n", sizeof(l));
    printf("char size= %d\n", sizeof(c));
    printf("float size= %d\n", sizeof(f));
    printf("double size= %d\n", sizeof(d));
}

void circle_area(){
    int r;
    printf("please enter radius: ");
    scanf("%d",  &r);
    double area, c;
    area = PI * r * r;
    c = 2 * PI * r;
    printf("area of circle: %f\n", area);
    printf("circumference of circle: %f\n", c);
}

void answer_check1(){
    int a=0256, b=256, c=0x256;
    printf("%d, %d, %d\n", a,b,c);
    printf("%d\n", M*4);
}

void answer_check2(){
    char c1='x', c2='z';
    int x1=1, x2=2;
    printf("%d, %d\n", c1, c2);
}

int main() {
    //1
    variable_size();
    printf("\n\n");

    //2
    circle_area();
    printf("\n\n");

    //3
    printf("answer 1.1 check: \n");
    answer_check1();
    printf("\n\n");

    printf("answer 1.2 check: \n");
    answer_check2();
    printf("\n\n");

    return 0;
}
