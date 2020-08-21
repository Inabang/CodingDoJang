// #include <stdio.h>


// int main()
// {
//     unsigned char flag = 7;

//     flag &= ~2; // 1111 1101 mask의 값 2의 비트를 뒤집은뒤 AND로 7번째 비트를 끈다.

//     printf("%u\n",flag);
  
//     if (flag & 1)    // & 연산자로 0000 0001 비트가 켜져 있는지 확인
//         printf("0000 0001은 켜져 있음\n");
//     else
//         printf("0000 0001은 꺼져 있음\n");
 
//     if (flag & 2)    // & 연산자로 0000 0010 비트가 켜져 있는지 확인
//         printf("0000 0010은 켜져 있음\n");
//     else
//         printf("0000 0010은 꺼져 있음\n");
 
//     if (flag & 4)    // & 연산자로 0000 0100 비트가 켜져 있는지 확인
//         printf("0000 0100은 켜져 있음\n");
//     else
//         printf("0000 0100은 꺼져 있음\n");
 
//     return 0;
// }

// mask값을 ~연산자로 비트를 뒤집은뒤 &=연산자를 사용하여 특정 비트를 끈다.
// 1111 1101에서 1은 원래 잇던 비트값을 유지한다. 
// 비트 AND 연산이므로 0이었다면 그대로 0이되고 1이었다면 그대로 1이된다.
// 그리고 1111 1101에서 0은 비트 AND 연산을 했을때 원래 비트가 1이든 0이든 항상 0이므로
// 원하는 비트를 끄게된다.