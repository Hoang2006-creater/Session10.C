#include <stdio.h>

int main() {
    // Khoi tao mang va cac bien
    int array[] = {16, 11, 6, 34, 33, 22, 11, 6};
    int n = sizeof(array) / sizeof(array[0]);
    int key, i, count = 0;

    // Mang luu cac vi tri tim duoc
    int positions[n];

    // In mang ban dau
    printf("Mang ban dau: \n");
    for (i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    // Yeu cau nguoi dung nhap phan tu can tim
    printf("Nhap mot so nguyen de tim trong mang: ");
    scanf("%d", &key);

    // Tim kiem tuyen tinh va luu vi tri vao mang positions
    for (i = 0; i < n; i++) {
        if (array[i] == key) {
            positions[count] = i;  // Luu vi tri vao mang positions
            count++;  // Tang bien dem
        }
    }

    // In ket qua tim kiem
    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai vi tri: ", key);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}

