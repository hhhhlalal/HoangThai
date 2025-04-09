#include <stdio.h>
#include <time.h>
void bubbleSort1(short arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                short temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    short arr[100];
    for (int i = 0; i < 100; i++) arr[i] = 100 - i;
    clock_t start = clock();
    bubbleSort1(arr, 100);
    clock_t end = clock();
    printf("C1 Time: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}