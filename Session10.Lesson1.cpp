#include <stdio.h>
int main() {
    // Khai bao mang 
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int a, thay = 0;
    
    // Nhap phan tu 
    printf("Nhap phan tu can tim: ");
    scanf("%d", &a);
    
    // Kiem tra 
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("Vi tri trong mang la %d\n", i+1);
            break;
        }
    }
    
    if (!thay){
        printf("Phan tu khong ton tai.\n");
    }

    return 0;
}

