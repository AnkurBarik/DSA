// write a c program to search an element from n numbers of array, using an algorithm who's time complexity is order of n

#include<stdio.h>

int linearSearch(int a[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, k;
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter %d element: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter element you want to search: ");
    scanf("%d", &k);
    
    int result = linearSearch(a, n, k);
    
    if(result == -1) {
        printf("%d not found\n",k);
    } else {
        printf("%d found on no. %d\n",k, result+1);
    }
    
    return 0;
}
