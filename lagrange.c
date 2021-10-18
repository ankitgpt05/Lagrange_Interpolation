#include<stdio.h>

int main()
{
int i,j,n;
printf("Enter the number of Data inputs: ");
scanf("%d",&n);
float x[n],y[n],s=0,p,a;

for(i=0;i<n;i++)
{
printf("\nvalue of x[%d]: ",i);
scanf("%f",&x[i]);
printf("value of y[%d]: ",i);
scanf("%f",&y[i]);
}

printf("\nEnter the value of interpolation point: ");
scanf("%f",&a);

for(i=0;i<n;i++)
{
p=1;
for(j=0;j<n;j++)
{
if(i!=j)
{
p=p*((a-x[j])/(x[i]-x[j]));
}
}
s=s+p*y[i];
}

printf("Hence, the interpolated value at f(%.3f) is %f",a,s);
return 0;
}
