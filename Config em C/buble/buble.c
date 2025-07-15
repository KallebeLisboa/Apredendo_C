#include<stdio.h>
#include<stdlib.h>

//codigo retirado da wikipedia
//complexidade O(n^2)

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

void bubbleSort(int *v, int n) {

    if (n < 1)
        return;

    for (int i=0; i<n; i++)
        if (v[i] > v[i+1])
            swap(&v[i], &v[i+1]);

    bubbleSort(v, n-1);
} 

int main() {

    //int v[] = {1, 10, 9,  7, 3, 0};
    int v[] = {1, 10, 9,  7, 3, 0, 4, 5, 6, 8, 11};
    int i;

    bubbleSort(v, 10);
    for(i=0;i<11;i++)
        printf("%d ",v[i]);
    return 0;
}