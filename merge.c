#include<stdio.h>
void main()
{
int a[50],b[50],i,j,k,n,m,c[50],s;
printf("enter the size of fist array:");
scanf("%d",&n);
printf("enter the first sorted value:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of second array:");
scanf("%d",&m);
printf("enter the second sorted value:");
for(j=0;j<m;j++)
{
scanf("%d",&b[j]);
}
i=0; j=0;k=0;

while(i<=n-1 && j<=m-1)
{
if(a[i]>b[j])
{
c[k]=b[j];
j++;
k++;	
}
else if(b[j]>a[i])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]==b[j])
{
c[k]=a[i];
i++;
j++;
k++;
}
}

while(i<=n-1)
{
c[k]=a[i];
i++;
k++;
}
while(j<=m-1)
{
c[k]=b[j];
j++;
k++;
}
s=k;
printf("the mergerd array is \n");
for(k=0;k<s;k++)
{
printf("\n %d",c[k]);
}
printf("\n");
}
