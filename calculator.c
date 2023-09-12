#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define pi 3.1416
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void SIN();
void COS();
void TAN();
void newtonlawofmotion();
/* newton second law of motion
that is f = ma
where f =force
a = acceleration
M = mass*/
void physicslaw();
/*Mass and weight
that is w = mg
where w = weight
m = mass
g = gravity*/
void exit();
int main(){
    printf("\n\t scientific calculator\n\n");
    int choice;
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.modulus\n");
    printf("6.factorial\n");
    printf("7.power\n");
    printf("8.square\n");
    printf("9.cube\n");
    printf("10.squareroot\n");
    printf("11.sin()\n");
    printf("12.cos()\n");
    printf("13.tan()\n");
    printf("14.newton second law()\n");
    printf("15.physicslaw()\n");
    printf("0.exit\n");

    while(1){
        printf("\n please choose operator: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        addition();
        break;
        case 2:
        subtraction();
        break;
        case 3:
        multiplication();
        break;
        case 4:
        division();
        break;
        case 5:
        modulus();
        break;
        case 7:
        power();
        break;
        case 6:
        factorial();
        break;
        case 8:
        square();
        break;
        case 9:
        cube();
        break;
        case 10:
        squareroot();
        break;
        case 11:
        SIN();
        break;
        case 12:
        COS();
        break;
        case 13:
        TAN();
        break;
        case 14:
        newtonsecondlaw();
        break;
        case 15:
        physicslaw();
        break;
        case 0:
        exit(0);
        default:
        printf("|| please enter valid operator");

        }
    }
    getch();
return 0;

}
void addition(){
  int a,b;
  printf("enter the number you want to add:");
  scanf("%d %d",&a,&b);
  printf("sum=%d\n",a+b);
}
void subtraction(){
 int a,b;
 printf("enter the numbers you want to subtract: ");
 scanf("%d %d",&a,&b);
 printf("subtract= %d\n",a-b);
 }
void multiplication(){
 int a,b;
 printf("enter the numbers you want to multiply: ");
 scanf("%d %d",&a,&b);
 printf("multiplication= %d\n",a*b);
}
void division(){
 int a,b;
 printf("enter the numbers you want to divide: ");
 scanf("%d %d",&a,&b);
 printf("division= %f\n",(float)a/(float)b);
}
 void modulus(){
 int a,b;
 printf("enter the numbers you want to modulus: ");
 scanf("%d %d",&a,&b);
 printf("modulus= %d\n",a%b);
 }

 void factorial(){
 int i,n,factorial=1;
 printf("enter the numbers you want to factorial: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
    factorial=factorial*i;
 }
 printf("factorial= %d\n",factorial);
 }

 void power(){
 double b,p;
 printf("enter the base and the power: ");
 scanf("%lf %lf",&b,&p);
 double res=pow(b,p);
 printf("power= %lf\n",res);
 }
 void square(){
 double b;
 printf("enter the value you want to square:");
 scanf("%lf",&b);
 double res=pow(b,2);
 printf("square=%lf,res");
 }
 void cube(){
 double b;
 printf("enter the numbers you want to cube: ");
 scanf("%lf",&b);
 double res=pow(b,3);
 printf("cube= %lf",res);
 }
 void squareroot(){
 double b;
 printf("enter the numbers you want to squareroot: ");
 scanf("%lf" ,&b);
 double res=sqrt(b);
 printf("squareroot= %lf\n",res);
 }
 void SIN(){
 double a,b;
 printf("enter angle(in degree): ");
 scanf("%lf",&a);
 b = sin(a*pi/180);
 double res=sin(a);
 printf("sin(%.2lf)=%.2lf\n",a,b,res);
 }
 void COS(){
 double a,b;
 printf("enter angle(in degree): ");
 scanf("%lf",&a);
 b = cos(a*pi/180);
 double res=cos(a);
 printf("cos(%.2lf)=%.2lf\n",a,b,res);
 }
 void TAN(){
 double a,b;
 printf("enter angle(in degree): ");
 scanf("%lf",&a);
 b = tan(a*pi/180);
 double res=tan(a);
 printf("tan(%.2lf)= %.2lf\n",a,b,res);
 }
 void newtonsecondlaw(){
 float m,a;
 printf("enter m (in kg):");
 scanf("%f",&m);
 printf("enter a:");
 scanf("%f",&a);
 printf("Force will be %.2f newton:",m*a);
 }
 void physicslaw(){
 float m,g;
 printf("enter m (in kg):");
 scanf("%f",&m);
 printf("enter g (in n/kg):");
 scanf("%f",&g);
 printf("Weight will be %.2f newton:",m*g);
 }

