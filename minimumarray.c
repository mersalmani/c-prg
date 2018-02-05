#include<stdio.h>
int main()
{
int array[50],maximum,i,size,location=0;
printf("enter the number of element in array\n");
scanf('%d",&size);
printf("enter the %d number",size);
{
for(i=0;i<size;++i)
scanf("%d",array[i]);
maximum=array[0];
for(i=1;i<size;++i)
{
if(array[i]>maximum)
{
maximum=array[i];
location=i-1;
}
}
printf("maximum value location %d and its value %d",location,maximum);
return 0;
}
