// #include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y)=(t))
int partition(int list[], int left,int right)
{
    int pivot,temp,low,high;
    low = left;
    high= right+1;
    pivot=list[left];
    do{
        do {low++;}
        while(list[low]<pivot && low<=right); // pivot보다 크나 같은 값을 찾을 때 까지 low를 1씩 늘리면서 찾겠다&& right을 넘어가지 않을 떄 까지

        do {high--;}
        while(list[high]>pivot); // pivot 보다 작거나 같은 값을 찾을 때 까지 high를 1씩 줄이면서 찾겠다
        
        if(low<high){swap(list[low],list[high],temp);} // 값을 찾은 뒤 low가 high보다 작으면 low 위치의 값과 high 위치의 값을 바꾼다.
    }
    while(low<high);
    swap(list[left],list[high],temp); // low가 high보다 클 때 || low와 high가 엇갈렸을 때 high의 위치가 현재 피봇의 정렬 된 위치이다. / high와 list[low](pivot) 의 값을 바꾼다.
    return high;
}

void quicksort(int list[], int left,int right)
{
    if(left<right)
    {
        int q=partition(list, left, right);
        quicksort(list,left,q-1);
        quicksort(list,q+1,right);
    }
}

int main()
{
    int list[6]={10,2,20,7,50,1}; //원래는 정렬 할 수들 가장 마지막의 무한한 수를 넣는다. (2,147,483,647)
    quicksort(list,0,5);
    for(int i=0; i<6; i++)
        printf("%d ",list[i]);
    return 0;
}