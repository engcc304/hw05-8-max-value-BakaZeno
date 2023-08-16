/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/
#include <stdio.h>
int main(){
    int number1,number2,number3;

    printf("Test case:\n");
    scanf("%d %d %d",&number1,&number2,&number3);
    printf("Output:\n");
    printf("1st Number = %d\n",number1);
    printf("2nd Number = %d\n",number2);
    printf("3rd Number = %d\n",number3);
    if(number1>number2 && number1>number3){
        printf("The 1st Number is the greatest among three");
    }
    else if(number2>number1 && number2>number3){
        printf("The 2nd Number is the greatest among three");
    }
    else{
        printf("The 3rd Number is the greatest among three");
    }
}