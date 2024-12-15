#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap so phan tu trong mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("moi ban nhap phan tu thu %d la: ",i+1);
		scanf("%d",&a[i]);
	}
}
