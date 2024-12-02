#include <stdio.h>

int main(){
	// Khoi tao bien mang 
	int array[]={16,11,06,34,33,22};
	int n = sizeof(array)/sizeof(array[0]);
	int temp, right,left, key, mid, result;
	// In mang ban dau
	printf("Mang ban dau: \n");
	for(int i = 0;i < n;i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
	//Thuc bien bien doi thong qua phuong phap noi bot
	for(int i = 0; i< n -1;i++){
	for(int j = 0;j< n - i - 1;j++){
		if (array[j]>array[j+1]) { 
			 temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
			;
		}
	}
	}
	 printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
printf("\n");
    // Yeu cau nguoi dung nhap 
    printf("Nhap mot so nguyen de tim trong mang:\n");
    scanf("%d", &key);

    // Thuat toan tim kiem nhi phan
    left = 0;
    right = n - 1;
    result = -1;  

    while (left <= right) {
        mid = left + (right - left) / 2;

        // Kiem tra 
        if (array[mid] == key) {
            result = mid;  
            break;
        }

        //Neu phan tu tim kiem 
        if (array[mid] < key) {
            left = mid + 1;
        }
        // Neu phan tu tim kiem nho hon, bo qua phan phai
        else {
            right = mid - 1;
        }
    }

    // In ket qua
    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d trong mang.\n", key, result);
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}

