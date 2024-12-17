#include<stdio.h>
int main(){
	int choice;
	float a,b;
	printf("nhap so a: ");
	scanf("%f",&a);
	printf("nhap so b: ");
	scanf("%f",&b);
	do{
	printf("CALCULATOR.\n");
	printf("1.tong 2 so.\n");
	printf("2.hieu 2 so.\n");
	printf("3.tich 2 so.\n");
	printf("4.thuong 2 so.\n");
	printf("5.thoat\n");
	printf("lua chon cua ban:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("tong 2 so : %.1f+%.1f= %.1f\n",a,b,a+b);
			break;
		case 2:
			printf("hieu 2 so : %.1f-%.1f= %.1f\n",a,b,a-b);
			break;
		case 3:
			printf("tich 2 so : %.1f*%.1f= %.1f\n",a,b,a*b);
			break;
		case 4:
			printf("thuong 2 so : %.1f/%.1f= %.1f\n",a,b,a/b);
			break;
		case 5:
			printf("thoat chuong trinh.\n");
			break;
		default:
			printf("vui long thu lai.\n");		
	}
   }  while(choice !=5); 
	
	
	return 0;
}
