// // num1의 비트를 왼쪽으로 3번 이동한 값으로 flag의 비트 켜기
// // num2의 비트를 오른쪽으로 2번 이동한 값으로 flag의 비트 끄기
// // flag의 첫 번째 비트 토글하기


// #include <stdio.h>
 
// int main()
// {
//     unsigned char flag = 16;
//     unsigned char num1, num2;
 
//     scanf("%hhu %hhu", &num1, &num2);
 
//     num1 = num1 << 3;
//     num2 = num2 >> 2 ;

//     printf("%d\n",num1);
//     printf("%d\n",num2);

//     flag |= num1;
//     flag &= ~num2;

//     flag ^= 1 << 7;

 
//     printf("%u\n", flag);
 
//     return 0;
// }