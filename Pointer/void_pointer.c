// #include <stdio.h>

// int main()
// {
//   int num1 = 10;
//   char c1 = 'a';
//   int *numPtr1 = &num1;
//   char *cPtr1 = &c1;

//   void *ptr; // void포인터 선언

//   // 포인터 자료형이 달라도 컴파일 경고가 발생하지않음.
//   ptr = numPtr1;
//   ptr = cPtr1;


// }

// 기본적으로 C언어는 자료형이 다른 포인터끼리 메모리 주소를 저장하면 
// 컴파일 경고가 발생한다. 하지만 void 포인터는 자료형이 정해지지 않은 특성 때문에
// 어떤 자료형으로 된 포인터든 모두 저장할 수 있다.
// 즉 범용 포인터라고도 부른다.
// 단, void포인터는 자료형이 정해지지 않았으므로 값을 가져오거나 저장할 크기도 정해지지 않았다.
// 따라서 void포인터는 역참조를 할수가없다.
// void 키워드로는 변수를 선언할수도 없다.