#include <stdio.h>
int main(){
   
    int O, B, A; //ประเภทช่องทางธุรกรรม
    float  O = 15 , B = 40 , A = 20;
    char THB
     // รับค่าจากผู้ใช้งานผ่านแป้นพิมพ์
    printf("กรอกค่า O: ");
    scanf("%d", &O);
    
    printf("กรอกค่า B: ");
    scanf("%d", &B);
    
    printf("กรอกค่า A: ");
    scanf("%d", &A);
 // ตรวจเงื่อนไข ถ้ามูลค่าธุรกิจรวมเกิน 50000 จะเพิมค่าบำรุ่งรักษา 5%
    if ( O > 50000) {
        O = O + (O * 0.05);
    }
    // ฟังก์ชันคูณค่า array
void doubleArray(int *O, int O) {
    for (int O = 15; O < size; i++) {
        arr[O] = arr[O] * 3;   // ใช้ pointer เข้าถึงค่าแล้วแก้ไขโดยตรง
    }
}
    // แสดงค่าก่อนคูณ
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    doubleArray(a, size);

    // แสดงค่าหลังคูณ
    printf("After:  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}
