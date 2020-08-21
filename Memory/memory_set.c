// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//   long long *numPtr = malloc(sizeof(long long)); 

//   memset(numPtr, 0x27, 8); // numPtr이 가리키는 메모리를 8Byte 만큼 0x27로 설정

//   printf("0x%llx\n", *numPtr); // 27이 8개만큼 들어가있다.

//   free(numPtr);

//   return 0;
// }

// memset은 주로 메모리를 해당바이트만큼 0으로 설정할때 주로 사용한다.