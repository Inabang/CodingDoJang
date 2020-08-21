// #include <stdio.h>

// int main()
// {
//     int numArr[3][4] = {    // 세로 크기 3, 가로 크기 4인 int형 2차원 배열 선언
//         { 11, 22, 33, 44 },
//         { 55, 66, 77, 88 },
//         { 99, 110, 121, 132 }
//     };

//     printf("%d\n", sizeof(numArr)); // 48 => 4바이트의 요소가 12(4*3)이므로

//     int col = sizeof(numArr[0]) / sizeof(int); 
//     // 4 => 2차원 배열의 가로 크기를 구할떄는 가로 한줄의 크기를 요소의 크기로 나눠줌

//     int row = sizeof(numArr) / sizeof(numArr[0]); 
//     // 3 => 2차원 배열의 세로 크기를 구할때는 배열의 전체공간을 가로 한줄로 나눔

//     printf("%d\n", col); //=>4
//     printf("%d\n", row); //=>3 

//   return 0;
// }