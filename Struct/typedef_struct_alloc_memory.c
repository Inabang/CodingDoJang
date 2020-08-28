// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct _Person{
//   char name[20];
//   int age;
//   char address[100];
// } Person; // typedef 를 사용하여 구조체 별칭을 Person으로 정의

// int main()
// {                                     // 훨씬 더 간단하다.
//   Person *p1 = malloc(sizeof(Person)); // 구조체 별칭으로 포인터 선언, 메모리할당

//   // 화살표 연산자로 구조체 멤버에 접근하여 값을 할당.
//   strcpy(p1->name, "홍길동");
//   p1->age = 30;
//   strcpy(p1->address, "시시시 구구구 동동동");

//   printf("이름 %s\n",p1->name);
//   printf("나이 %d\n",p1->age);
//   printf("주소 %s\n",p1->address);  

//   free(p1);

//   return 0;
// }