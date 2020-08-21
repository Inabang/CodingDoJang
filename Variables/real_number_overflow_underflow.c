// #include <stdio.h>
// #include <float.h>

// int main()
// {
//     float num1 = FLT_MIN; // float의 최소
//     float num2 = FLT_MAX; // float의 최대

//     // float의 양수 최솟값을 100000000.0으로 나누면 아주 작은 수가 되면서 언더플로우 발생

//     num1 = num1  / 100000000.0f;

//     // float의 양수 최댓값에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서므로 오버플로우 발생
//     num2 = num2 * 1000.0f;

//     printf("%e %e\n", num1,num2);

//     return 0;
// }

// // 정수와는 달리 실수는 overflow가 발생하면 
// // 최솟값으로 되돌아가지 않고 inf가 출력된다 (무한대)