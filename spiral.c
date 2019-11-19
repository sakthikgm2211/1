#include<stdio.h>
int main()
{
int n=9,i,j,k=0,r;
for(i=0;i<2*n-1;i++){
k=0;
for(j=1;j<2*n;j++){
printf("%d ",n-k);
if(i>=j)
k++;
if(j>=(2*n)-i-1)
k--;

}
printf("\n");
}
