#include<stdio.h>
//int main(){
//    char name[]="Aparup Roychowdhury",dept[]="BSH";
//    int roll=25;
//    printf("Name: %s, Deparment: %s, Roll: %d", name,dept,roll);
//    return 0;
//}

//int main(){
//  int a,b,s,d;
//  printf("Enter Two numbers: ");
//  scanf("%d %d",&a,&b);
//  s=a+b;
//  d=a-b;
//  printf("Sum of the two numbers is: %d \n",s);
//  printf("Difference between the two numbers is: %d \n",d);
//
//}

//int main(){
//  int a=15,b=17,s,d;
//  s=a+b;
//  d=a-b;
//  printf("The Sum of the two numbers is:%d\n",s);
// printf("The Difference between the numbers is:%d\n",d);
//
//}

//int main(){
//  int a, b, c, p;
//  printf("Enter Three numbers: ");
//  scanf("%d %d %d",&a, &b, &c);
//  p=a*b*c;
//  printf("The product of the three numbers: %d\n ",p);
//  return 0;
//}

//int main(){
//  int a, b, c, d, e, s, avg;
//  printf("Enter five numbers: ");
//  scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
//  s=a+b+c+d+e;
//  avg=s/5;
//  printf("The sum is: %d\nThe Average is: %d\n",s,avg);
//}

//int main(){
//float a,b,p,area;
//printf("Enter the length and breadth: ");
//scanf("%f %f",&a,&b);
//p=2*(a+b);
//area=a*b;
//printf("The perimeter of the rectangle is:%f\n",p);
//printf("The area of the rectange is: %f\n",area);
//}

//int main(){
//  float pi=3.1416, r,a,c;
//  printf("Enter the radius of the circle: ");
//  scanf("%f",&r);
//  c=2*pi*r;
//  a=pi*r*r;
//  printf("Area of the circle:%f\n",a);
//  printf("Circumference of the circle:%f\n",c);
//}

//#include<math.h>
//int main(){
//  float a,l;
//  printf("Enter the length of the sides of the triangle: ");
//  scanf("%f",&l);
//  a=(sqrt(3)/4)*l*l;
//  printf("The area of the triangle is: %f\n",a);
//  return 0;
//}

//int main(){
//  float a,h,b;
//  printf("Enter the height of the triangle: ");
//  scanf("%f",&h);
//  printf("Enter the base of the triangle: ");
//  scanf("%f",&b);
//  a=0.5*b*h;
//  printf("The area of the triangle is: %f\n",a);
//}
  
//int main(){
//  int a,b,c;
//  printf("Enter the value of a: ");
//  scanf("%d",&a);
//  printf("Enter the value of b: ");
//  scanf("%d",&b);
//  c=a;
//  a=b;
//  b=c;
//  printf("The value of a: %d\n",a);
//  printf("The value of b: %d\n",b);
//}

//int main(){
//  int a,b;
//  printf("Enter the value of a: ");
//  scanf("%d",&a);
//  printf("Enter the value of b: ");
//  scanf("%d",&b);
//  a=a+b;
//  b=a-b;
//  a=a-b;
//  printf("The value of a:%d\n",a);
//  printf("The value of b:%d\n",b);
//}

//float ctf(float c){
// return (1.8*c+32);
//}
//float ftc(float f){
//  return ((5*(f-32))/9);
//}
//int main(){
//  float c,f;
//int choice;
//  printf("Enter choice: 1-->Fahrenhiet to celsius, 2-->Celsius to fahrenhiet: ");
//  scanf("%d",&choice);
//  switch (choice){
//    case(1):
//      printf("Enter the temperature in fahrenhiet: ");
//      scanf("%f",&f);
//      c=ftc(f);
//      printf("The temperature in celsius is %f\n",c);
//      break;
//
//    case(2):
//      printf("Enter the temperature in celsius: ");
//      scanf("%f",&c);
//      f=ctf(c);
//      printf("The temperature in fahrenhiet is %f\n",f);
//      break;
//
//    default:
//      printf("Enter a valid input");
//    
//
//  }
//}

//int main(){
//  int n;
//  printf("Enter a number: ");
//  scanf("%d"  ,&n);
//  if (n%2==0){
//    printf("%d is an even number\n",n);
//  }else{
//    printf("%d is an odd number\n",n);
//  }
//  return 0;
//}

//int main(){
//  int y;
//  printf("Enter the year: ");
//  scanf("%d",&y);
//  if(y%400==0){
//    printf("%d is a leap year\n",y);
//  }else if(y%100==0){
//    printf("%d is not a leap year\n",y);
//  }else if(y%4==0){
//    printf("%d is a leap year\n",y);
//  }
//  return 0;
//}

//int main(){
//  int a,b,c;
//  printf("Enter three numbers: ");
//  scanf("%d %d %d",&a,&b,&c);
//  if(a>b && a>c){
//    printf("%d is the largest number",a);
//  }else if(b>a && b>c){
//    printf("%d is the largest number",b);
//  }else if(c>a && c>b){
//    printf("%d is the largest number",c);
//  }
//  return 0;
//}

//int main(){
//  int n,i,s=0,p;
//  printf("Enter the number: ");
//  scanf("%d",&n);
//  p=n;
//  while(n!=0){
//  i=n%10;
//  s=s*10+i;
//  n=n/10;
//  } 
//  printf("Reverse number of %d is %d",p,s);
//}

//int main(){
//  int n,l,f;
//  printf("Enter a number: ");
//  scanf("%d",&n);
//  l=n%10;
//  while(n!=0){
//    f=n;
//    n=n/10;
//  }
//  printf("The first digit is %d\n",f);
//  printf("The last digit is %d\n",l);
//}

//int main(){
//  int n;
//  printf("Enter a number: ");
//  scanf("%d",&n);
//  if(n%100==0){
//    printf("%d is divisible by 100\n",n);
//  }else{
//    printf("%d is not divisible by 100\n",n);
//  }
//  return 0;
//}

//int main(){
//  int bs, al, gs;
//  printf("Enter the amount of basic salary: ");
//  scanf("%d",&bs);
//  printf("Enter the amount of allowances: ");
//  scanf("%d",&al);
//  gs=bs+al;
//  printf("The gross salary is: %d ",gs);
//  return 0;
//
//}

//int main(){
//  int m;
//  printf("Enter the marks of the student: ");
//  scanf("%d",&m);
//  printf("Grade: \0");
//  if(m>=90 && m<=100){
//    printf("AA");
//  }else if(m>=80 && m<90){
//    printf("A");
//  }else if(m>=60 && m<80){
//    printf("B");
//  }else if(m>=40 && m<60){
//    printf("C");
//  }else if(m>=0 && m<40){
//    printf("Fail!");
//    
//  }
//  return 0;
//
//}

//#include<math.h>
//int main(){
//  long double pi=M_PI; 
//  printf("The value of pi is: %.34Lf",pi);
//  return 0;
//
//}

//int main(){
//  int n,i;
//  printf("Enter a number: ");
//  scanf("%d",&n);
//  for(i=2;i<n;i++){
//    if(n%i==0){
//      printf("The number is not prime");
//      return 0;
//    }
//  }
//  printf("The number is prime");
//}

//int is_prime(int n){
//  int i;
//  if(n<2){
//    return 0;
//  }
//  for(i=2;i<n;i++){
//    if(n%i==0){
//      return 0;
//    }
//  }
//  return 1;
//}
//
//int main(){
//  int s,e,j;
//  printf("Enter the start and end of range:");
//  scanf("%d %d",&s,&e);
//  for (j=s;j<=e;j++){
//    if(is_prime(j)==1){
//      printf("%d\t",j);
//    }
//  }
//  return 0;
//}

//int is_amstrong(int n){
//  int i,s=0,p;
//  p=n;
//  while(n!=0){
//    i=n%10;
//    s=s+(i*i*i);
//    n=n/10;
//
//  }
//  if(p==s){
//    return 1;
//  }else{
//    return 0;
//  }
//}
//
//int main(){
//  int j;
//  for (j=0;j<=1000;j++){
//    if(is_amstrong(j)){
//      printf("%d\t",j);
//    }
//  }
//}

//int fact(int n){
//  if(n<1){
//    return 1;
//  }
//  return n*fact(n-1);
//}
//
//int main(){
//  int m;
//  printf("Enter a number: ");
//  scanf("%d",&m);
//  printf("%d",fact(m));
//}

//int main(){
//  int n,i,m;
//  printf("Enter a number: ");
//  scanf("%d",&n);
//  printf("Multiplication Table of %d:\n",n);
//  for(i=1;i<=50;i++){
//    m=n*i;
//    printf("%d X %d = %d\n",n,i,m);
//  }
//}

//int main(){
//  int i,n;
//  printf("Enter number of lines: ");
//  scanf("%d",&n);
//  for (i=0;i<n;i++){
//    printf("****\n");
//  }
//  return 0;
//}

//int main(){
//  int i,j,n;
//  printf("Enter number of lines: ");
//  scanf("%d",&n);
//  for (i=1;i<=n;i++){
//    for (j=1;j<=i;j++){
//      printf("*");
//    }
//    printf("\n");
//  }
//}

//int main(){
//  int i,j,k,n;
//  printf("Enter number of lines: ");
//  scanf("%d",&n);
//  for (i=1;i<=n;i++){
//    for(j=1;j<=n-i;j++){
//      printf(" ");
//    }
//    for(k=1;k<=i;k++){
//      printf("* ");
//    }
//    printf("\n");
//  }
//}

//int main(){
//  int i,j,n;
//  printf("Enter number of lines: ");
//  scanf("%d",&n);
//  for (i=1;i<=n;i++){
//    for (j=1;j<=i;j++){
//      printf("%d",j);
//
//    }
//    printf("\n");
//  }
//}

//int main(){
//  int i,j,n,temp=1;
//  printf("Enter number of lines: ");
//  scanf("%d",&n);
//  for (i=1;i<=n;i++){
//    for (j=1;j<=i;j++){
//      printf("%d ",temp);
//      temp++;
//    }
//    printf("\n");
//  }
//}

//int main(){
//  int r,c,i,j;
//  printf("Enter number of rows: ");
//  scanf("%d",&r); 
//  printf("Enter number of columns: ");
//  scanf("%d",&c);
//  for (i=1;i<=r;i++){
//    for(j=1;j<=c;j++){
//      if(i==j||i==(c-j+1)){
//        printf("%d ",1);
//      }else{
//        printf("%d ",0);
//      }
//    }printf("\n");
//  }
//  
//}

//int main(){
//  int i,j,n;
//  printf("Enter number of lines: ");
//  scanf("%d",&n);
//  for(i=1;i<=n;i++){
//    for(j=1;j<=n-i+1;j++){
//      printf("* ");
//    }printf("\n");
//  }
//}

//int main(){
//  int i,j,k,l,n;
//  printf("Enter number of lines(odd number): ");
//  scanf("%d",&n);
//  n=(n/2)+1;
//  for(i=1;i<=n;i++){
//    for(j=1;j<=i;j++){
//      printf("* ");
//    }printf("\n");
//  }
//  for(k=1;k<=n;k++){
//    for(l=1;l<=n-k;l++){
//      printf("* ");
//    }printf("\n");
//  }
//}

int main(){
  int i,j,k,l,n;
  printf("Enter line numbers: ");
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
      printf(" ");
    }
    for(k=1;k<=i;k++){
      printf("%d",k);
    }
    for(l=i-1;l>0;l--){
      printf("%d",l);
    }
    printf("\n");
  }
}

