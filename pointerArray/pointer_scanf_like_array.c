// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int size;

//   scanf("%d",&size);

//   int *numPtr = malloc(sizeof(int) * size); // int의 크기 * scanf 만큼 동적메모리할당

//   for ( int i = 0; i < size; i++) // 입력받은 크기만큼 반복
//   {
//     numPtr[i] = i; // 인덱스로 접근하여 값 할당
//   }

//   for ( int i = 0; i < size; i++)
//   {
//     printf("%d\n", numPtr[i]); // 출력
//   }
//   free(numPtr);

//   return 0;
// }