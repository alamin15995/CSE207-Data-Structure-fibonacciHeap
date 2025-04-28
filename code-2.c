//Convert Finbonacci series to Fibonacci heap::: code number 2
#include<stdio.h>
#include<stdlib.h>
static int b,c[500];
static int a[500],k=0;
insert(int a[],int k){
for(int i=1;i<=k;i++){
c[i]=a[i];
int e=i/2;
if(i>1){
    reheapmin(i,e);
 }
}
}
reheapmin(int i,int e){
    if(c[i]<c[e]){
        swap(i,e);
        int f=e/2;
        if(f!=0){
        reheapmin(e,e/2);
        }
    }
}
swap(int i,int e){
    int temp=c[e];
    c[e]=c[i];
    c[i]=temp;
}
display(){
    printf("\nHERE THE HEAPMIN/FIBONACCI HEAP ELEMENTS ARE");
    for(int j=1;j<=k;j++){
        printf(" %d ",c[j]);
    }
}
void deleteMax(){
    if(k!=0)
    {
        printf("Extracted value: %d\n",c[1]);
        c[1]=c[k];
        k--;
        ReheapDown(1,k);
    }
}
void ReheapDown(int position, int lastposition)
{
    int left = 2*position+1;
    int right = 2*position+2;
    int largest=position;
    int min;
    int d=0;
    if(left<=lastposition && c[largest]>c[left])
    {
         min=left;
         d++;
    }
    else if(right<=lastposition && c[largest]>c[right])
    {
         min=right;
         d++;
    }
    if(min!=position && k!=0)
    {
        swap(min,position);
        ReheapDown(min,lastposition);
    }
}
int main(){
    int i,j,n,sum=0,x,y;
    while(1){
printf("\n===================START=====================");
printf("\n1:: FOR CREATING A FIBONACCI SERIES\n");
printf("\n====================MENU=====================");
printf("\n2:: FOR INSERT OPERATION IN HEAP ");
printf("\n3:: FOR DISPLAY OPERATION");
printf("\n4 :: FOR EXTRACT MIN OPERATION");
printf("\n5 :: FOR EXIT OPERATION");
printf("\n===================END MENU==================\n");
int d;
printf("\nENTER YOUR CHOICE ");
scanf("%d",&d);
if(d==1)
    {
    printf("\nENTER THE VALUE ");
    scanf("%d",&n);
    printf("0 ");
    k++;
    a[k]=0;
    for(int i=1;i<n;i++){
        if(i==1){
        printf("%d ",i);
        k++;
        a[k]=i;
        sum=sum+i;
        k++;
        a[k]=sum;
        printf("%d ",sum);
        x=i;
        y=sum;}
        else{
        sum=sum+x;
        k++;
        printf("%d ",sum);
        a[k]=sum;
        x=y;
        y=sum;
        }
}
}
printf("\n");
if(d==2){
insert(a,k);
}
else if(d==3){
display();
}
else if(d==5){
exit(0);
}
else if(d==4){
    deleteMax();
}
else{
    printf("\nWRONG CHOICE");
}
}
return 0;
}
