#include <stdio.h>

int main() {
    int num1, num2, choice;
    float DapAn;
        printf("Nhap so thu nhat: ");
        scanf("%d", &num1);
        printf("nhap so thu hai: ");
        scanf("%d", &num2);
         printf("CALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
           while(1) {
        printf("nhap so (1-5): ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                DapAn = num1 + num2;
                printf("Tong cua %d va %d la: %.2f\n", num1, num2, DapAn);
                break;
            case 2:
                DapAn = num1 - num2;
                printf("Hieu cua %d va %d la: %.2f\n", num1, num2, DapAn);
                break;
            case 3:
                DapAn = num1 * num2;
                printf("Tich cua %d va %d la: %.2f\n", num1, num2, DapAn);
                break;
            case 4:
                if(mun2 !=0){
                    DapAn = (float)num1 / num2;
                    printf("Thuong cua %d va %d la: %.2f\n", num1, num2, DapAn);
                }else{
                    printf("dapan = 0");
                }
                
                break;
            case 5:
                printf("Thoat chuong trinh...\n");
                return 0;
            default:
                printf("lua chon khong hop le vui long nhap lai so khac.\n");
        }
        printf("\n");
    }

    return 0;
}

