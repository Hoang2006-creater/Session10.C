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
	for(int i =1 ;i<n;i++){
		key = array[i];
		int j = i - 1;
		while(j>=0 &&array[j]>key){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j+1]=key;
	}
	
	printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
	return 0;
}
