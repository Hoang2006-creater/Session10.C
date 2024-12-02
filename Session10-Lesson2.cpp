#include<stdio.h>
int main(){
	// Khoi tao bien mang 
	int array[]={16,11,06,34,33,22};\
	int n = sizeof(array)/sizeof(array[0]);
	int temp;
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
	return 0;
}

