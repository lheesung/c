#include <stdio.h>
int i, key, count, n, result, size;
int arr[65];

int isAscending() {
    for(i=0; i<n-1; i++) {
        if(arr[i] >= arr[i+1]) return 0;
        else continue;
    }
    return 1;
}

int isDescending() {
    for(i=0; i<n-1; i++) {
        if(arr[i] <= arr[i+1]) return 0;
        else continue;
    }
    return 1;
}

int search(int start, int end) {
    int middle = 0;
    if(isAscending()) {
        if(start <= end) {
            count++;
            middle = (start+end)/2;
            if(key == arr[middle]) return count;
            else if(key < arr[middle]) return search(start, middle-1);
            else if(key > arr[middle]) return search(middle+1, end);
        }
        return -1;
    } else if(isDescending()) {
        if(start <= end) {
            count++;
            middle = (start+end)/2;
            if(key == arr[middle]) return count;
            else if(key > arr[middle]) return search(start, middle-1);
            else if(key < arr[middle]) return search(middle+1, end);
        }
        return -1;
    } else {
        return -2;
    }
}

int main() {
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);
    result = search(0, n-1);
    if(result == -1) printf("실패\n");
    else if(result == -2) printf("불가능\n");
    else printf("%d\n", result); 
    return 0;
}