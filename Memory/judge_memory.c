// // 표준입력으로 정수 2개가 입력된다
// // 두 정수의 합을 출력한다.


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int num1;
//     int num2;

//     int *numPtr1; 
//     int *numPtr2;

//     numPtr1 = malloc(sizeof(int)); 
//     numPtr2 = malloc(sizeof(int));


//     scanf("%d %d", &num1, &num2);

//     *numPtr1 = num1;
//     *numPtr2 = num2;

//     printf("%d\n", *numPtr1 + *numPtr2);

//     free(numPtr1);
//     free(numPtr2);

//     return 0;
// }