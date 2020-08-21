// #include <stdio.h>

// int main()
// {
//     unsigned char num1 = 131;
//     char num2 = -125;

//     unsigned char num3;
//     char num4;

//     num3 = num1 >> 5; // 1000 0011 에서 맨뒤의 11이 사라지고 맨앞의 1이 5번 움직인다.
//     num4 = num2 >> 5; //  1000 0011에서 모자라는 공간은 부호 비트의 값인 1로 채워지므로 
//                      // 1111 1100이 됨.


//     printf("%u\n", num3);
//     printf("%d\n", num4);

//     return 0;
// }