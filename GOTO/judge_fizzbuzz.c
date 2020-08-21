// 표준입력으로 정수 두개가 입력된다.
// 1은 1~1000, 2는 10~1000이며 1은 항상 2보다 작다.
// 1~2까지의 숫자를 출력하면서 
// 5의 배수일 때는 Fizz 11의 배수일때는 Buzz 5와 11의 공배수 일때는 FizzBuzz

// #include <stdio.h>

// int main()
// {
//   int num1,num2;
//   scanf("%d %d",&num1, &num2);
//   if(num1 >= num2)
//   {
//     goto EXIT;
//   }

//   for (int i = num1; i <= num2; i++)
//   {
//     if(i % 55 == 0)
//     {
//       printf("FizzBuzz\n");
//     }
//     else if(i % 5 == 0)
//     {
//       printf("Fizz\n");
//     }
//     else if(i % 11 == 0)
//     {
//       printf("Buzz\n");
//     }
//     else
//     {
//       printf("%d\n",i);
//     }
//   }
// EXIT:
//   return 0;
// }