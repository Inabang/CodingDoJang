// #include <stdio.h>
// #include <stddef.h>

// struct PacketHeader{
//   char flags; // 1byte
//   int seq; // 4byte
// };

// // 구조체는 4바이트 단위로 정렬하므로
// // seq는 1이아닌 4가 나온다.

// int main()
// {
//   printf("%d\n",offsetof(struct PacketHeader, flags)); // 0
//   printf("%d\n",offsetof(struct PacketHeader, seq)); // 4

//   return 0;
// }