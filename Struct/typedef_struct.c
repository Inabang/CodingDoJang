// #include <stdio.h>
// #include <string.h>

// typedef struct _person{
//   char name[20];
//   int age;
//   char address[100];
// }Person; // typedef 사용하여 구조체 별칭을 Person으로 정의


// int main()
// {
//   Person p1;
//   // 점으로 구조체 멤버에 접근하여 값을 할당한다
//   strcpy(p1.name, "홍길동");
//   p1.age = 30;
//   strcpy(p1.address, "서울시 용산구 한남동");

//   printf("이름 : %s\n",p1.name);
//   printf("나이 : %d\n",p1.age);
//   printf("주소 : %s\n",p1.address);

//   return 0;  
// }