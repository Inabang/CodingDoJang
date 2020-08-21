// // 메모리를 사용하려면 malloc 함수를 사용할 메모리 공간을 확보해야한다.
// // 메모리의크기는 byte 단위로 지정한다.
// // pointer = malloc(크기);
//   // void *malloc(size_t_Size);
//   // 성공하면 메모리 주소를 반환, 실패하면 NULL을 반환

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int num1 = 20;
//   int *numPtr1;

//   numPtr1 = &num1;

//   int *numPtr2;

//   numPtr2 = malloc(sizeof(int)); // int의 크기 4byte만큼 동적 메모리할당.

//   printf("%p\n", numPtr1); // 변수 num1의 메모리 주소를 출력
//   printf("%p\n", numPtr2); // 새로 할당된 메모리의 주소 출력

//   free(numPtr2); // 동적으로 할당된 메모리를 해제한다

//   return 0;
// }

// // 메모리를 할당할때는 malloc 함수를 사용하여 할당할 메모리 공간의 크기를 넣는다
// // 여기서는 sizeof 연산자를 사용하여 int의 크기만큼 넣었다
// // 원하는 시점에 원하는만큼 할당한다하여 동적 메모리 할당이라 부른다.