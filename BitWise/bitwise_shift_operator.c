// #include <stdio.h>

// int main()

// {
//     unsigned char num1 = 3; // 0000 0011
//     unsigned char num2 = 24; // 0001 1000

//     printf("%u\n",num1 << 3); // 24 : 0001 1000 num1의 비트값을 왼쪽으로 3번이동
//     printf("%u\n",num2 >> 2); // 6 : 0001 1000을 오른쪽으로 2번이동

//     return 0;
// }

// 3 << 3dms 3*2(3) 과 같으므로 24가 되고
// 24 >> 2 는 24/2(2)과 같으므로 6이 된다.
// 즉 <<연산은 2의 거듭제곱을 곱하며
// >>은 2의 거듭제곱을 나눈다.