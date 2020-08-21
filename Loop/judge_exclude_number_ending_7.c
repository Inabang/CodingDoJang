// // 입력값의 범위는 1~200
// // 두번째는 10~200
// // 첫입력값은 두번째보다 항상작다.
// // 첫정수와 두번째 정수 사이의 숫자중 7로 끝나지 않는 숫자.

// #include <stdio.h>

// int main()
// {
//     int num1;
//     int num2;
//     int i;

//     scanf("%d %d", &num1, &num2);
    
//     i = num1;

//     while (1)
//     {
//         if(i > num2){
//           break;
//         }else if(num1 >= num2){
//           break;
//         }



//         if(i % 10 == 7){
//           i++;
//           continue;
//         }


//         printf("%d ", i);
//         i++;
//     }

//     return 0;
// }