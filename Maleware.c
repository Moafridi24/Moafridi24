#include <stdio.h>

int arr[] = {1, 2, 0, 5, 0, 2, 4, 3, 3, 3};
int positions[100];  // Assuming a maximum of 100 positions

void printPattern(int entries[], int size) {
    int i, x, tf, tl, posIndex = 0;

    for (i = 0; i < size; i++) {
        x = entries[i];
        tf = i - 3;
        tl = i + 4;

        if (tf >= 0 && entries[tf] >= x) {
            positions[posIndex++] = i;
        }

        if (tl < size && entries[tl] >= x) {
            positions[posIndex++] = i;
        }
    }

    for (i = 0; i < posIndex; i++) {
        entries[positions[i]] = 0;
    }
}

int main() {
    int size = sizeof(arr) / sizeof(arr[0]);

    printPattern(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }

    return 0;
}
