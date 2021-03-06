// #include <stdio.h>

// int main()
// {
//     unsigned char flag = 7;

//     flag ^= 2; // 0000 0010 마스크와 비트 XOR로 일곱 번째 비트를 토글
//     flag ^= 8; // 0000 1000 마스크와 비트 XOR로 다섯 번째 비트를 토글

//     printf("%u\n", flag);    // 13: 0000 1101
 
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
 
//     if (flag & 8)    // & 연산자로 0000 1000 비트가 켜져 있는지 확인
//         printf("0000 1000은 켜져 있음\n");
//     else
//         printf("0000 1000은 꺼져 있음\n");
 
//     return 0;    
// }

// ^= 연산자와 마스크를 사용하여 특정 비트가 켜져있다면 끄고 꺼져있다면 켠다.
// 두비트가 다르면 1 같으면 0이기에 flag의 비트가 1이라면 마스크의 1과 같으므로 0이되고
// 0이라면 마스크의 1과 다르므로 1이 되는 원리.