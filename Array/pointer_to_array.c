// #include <stdio.h>

// int main()
// {
//   int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 ,110};

//   int *numPtr = numArr;

//   printf("%d\n", *numPtr); // 11 => 배열의 주소가 들어있는 포인터를 역참조하면 첫요소접근
//   printf("%d\n", *numArr); // => 배열자체를 역참조해도 첫요소에 접근한다.

//   printf("%d\n", numPtr[5]); // 66 => 배열의 주소가 들어있는 포인터는 인덱스로 접근한다.

//   printf("%d\n", sizeof(numArr)); 

//   printf("%d\n", sizeof(numPtr)); // 4 => 배열의 주소가들어있는 포인터의 크기를 구하면
//   // 포인터의 크기가 출력된다. 

//   return 0;
//  }