#include <stdio.h>
int sorted[100],count;

void merge(int list[], int left,int mid, int right)
{
    int i,j,k,l;
    i=left;
    j=mid+1;
    k=left;
    while(i<=mid && j<=right){
        if(list[i]<=list[j]) sorted[k++]=list[i++];
        else sorted[k++]=list[j++];
    }
    if(i>mid)
        for(l=j; l<=right; l++)
            sorted[k++]=list[l];
    else
        for(l=i; l<=mid; l++) sorted[k++]=list[l];
    for(l=left; l<=right; l++) list[l]=sorted[l];
}

void mergesort(int list[], int left,int right){
    int mid;
    if(left<right){
        mid=(left+right)/2;
        printf("mid : %d\n",mid);
        printf("left & right : (%d, %d)\n",left, mid);
        mergesort(list,left,mid);
        
        puts("");
        printf("mid+1 & right : (%d, %d)\n", mid+1, right);
        mergesort(list,mid+1,right);
        
        puts("");
        printf("left mid right : (%d, %d, %d)\n", left, mid, right);
        merge(list,left,mid,right);
    }
}

int main(){
    int list[5]={30,27,12,20,25};
    mergesort(list,0,4);
    for(int i=0; i<5; i++)
    {
        printf("%d ",list[i]);
    }
    return 0;
}