// #include <stdio.h>

// int main()
// {
//   int *numPtr1;
//   int **numPtr2; // 이중 포인터 선언
//   int num1 = 10;

//   numPtr1 = &num1; 
//   numPtr2 = &numPtr1; // numPtr1의 메모리 주소를 저장한다.

//   printf("%d\n", **numPtr2);

//    // => 10 포인터를 두번 역참조하여 num1의 메모리 주소에 접근.

//   return 0;  
// }

// 포인터도 변수이기때문에 메모리 주소를 구할 수 있다.
// 하지만 포인터의 메모리 주소는 일반 포인터에 저장할 수 없고. **처럼 이중 포인터에 저장해야한다.
// int **numPtr2를 해석하면 pointer to pointer to int가 된다.
// 이중 포인터 numPtr2를 끝까지 따라가서 실제 값을 가져오려면 
// 변수앞에 역참조 연산자를 두번 사용하면된다.


// **numPtr2 =>            *numPtr1 =>         10
// numPtr1의 메모리주소     num1의 메모리주소    10