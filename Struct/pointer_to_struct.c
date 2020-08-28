// #include <stdio.h>

// typedef struct _Person{
//   char name[20];
//   int age;
//   char address[100];
// }Person;

// int main()
// {
//   Person p1;
//   Person *ptr; // 구조체 포인터 선언

//   ptr = &p1; // p1의 메모리 주소를 구하여 ptr에 할당

//   ptr->age = 30; // arrow 로 구조체 멤버에 접근하여 값을 할당한다.

//   printf("나이 %d\n", p1.age);
//   printf("나이 %d\n", ptr->age); 

//   return 0;
// }