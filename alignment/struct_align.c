// #include <stdio.h>

// #pragma pack(push,1) // 1바이트 크기로 정렬
// struct PacketHeader {
//   char flags; // 1byte
//   int seq; // 4byte
// };
// #pragma pack(pop) // 정렬 설정을 이전 상태로 되돌림

// // 정렬설정을 한다면 pragma pack(pop) 으로 설정을 이전상태로 되돌린다.

// int main()
// {
//   struct PacketHeader header;

//   printf("%d\n", sizeof(header.flags)); //1 
//   printf("%d\n", sizeof(header.seq)); //4
//   printf("%d\n", sizeof(header)); // 5

//   return 0;
// }