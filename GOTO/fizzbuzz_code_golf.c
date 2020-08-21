// #include <stdio.h>

// int main()
// {
//   for ( int i = 0; ++i <= 100; )
//   {
//     printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuz\n", i);
//   }

//   return 0;
// }


//  for ( int i = 0; ++i <= 100; ) 변화식 부분을 생략하고 조건식에서 변화식을 모두 처리한다.
// ++i < = 100 코드를 반복할 때마다 ++를 수행하여 1을 증가시킨뒤 100보다 작거나 같은지 검사.


// printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);

// 삼항연산자를 사용하여 각 조건을 모두 처리하면서 문자열만 printf로 출력하는 방식.
// i % 5 가 False면 Buzz를 출력.
// i % 3 이 False면 다시 i % 5를 계산 이때 0이 아닌 값이 나오면 3의 배수이므로 
// Fizz를 출력.
// 이제 i % 3 이 0 이고 i % 5가 0이면 3과 5의 공배수이므로 FizzBuzz를 출력.