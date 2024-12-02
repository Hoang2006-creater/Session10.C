#include<stdio.h>
int main(){
	// Khoi tao bien mang 
	int array[]={16,11,06,34,33,22};\
	int n = sizeof(array)/sizeof(array[0]);
	int key;
	// In mang ban dau
	printf("Mang ban dau: \n");
	for(int i = 0;i < n;i++){
		printf("%d\t",array[i]);
	}
	printf("\n");
	for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j; 
        }
        
        if (min_idx != i) {
            int temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;
        }
    }
}
	printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }

return 0;
}
