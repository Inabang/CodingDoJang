// #include <stdio.h>
// #include <float.h>

// int main()
// {
//     float num1 = FLT_MIN; // float의 양수 최솟값
//     float num2 = FLT_MAX; // float의 양수 최댓값
//     double num3 = DBL_MIN; // double의 양수 최솟값
//     double num4 = DBL_MAX; // doulbe의 양수 최댓값
//     long double num5 = LDBL_MIN; // long double의 양수 최솟값
//     long double num6 = LDBL_MAX; // long double의 양수 최댓값

//     printf("%.40f %.2f\n", num1,num2);
// // 0.0000000000000000000000000000000000000118
// // 340282346638528859811704183484516925440.00

//     printf("%e %e\n", num3,num4); 
// // 2.225074e-308 1.797693e+308
//     printf("%Le %Le\n", num5,num6);
// // 2.225074e-308 1.797693e+308

//     return 0;
// }

// //float.h 헤더 파일에 각 자료형 별로 양수 최솟값과 최댓값이 정의되어있다.
