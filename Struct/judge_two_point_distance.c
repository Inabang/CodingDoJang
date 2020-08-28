// // 정수4개가 입력되어 Point2D구조체에 저장
// // 두점 사이의 거리를 출력

// #include <stdio.h>
// #include <math.h>

// struct Point2D{
//   int x;
//   int y;
// };

// int main()
// {
//   struct Point2D p1;
//   struct Point2D p2;
//   double distance;

//   scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

//   int a = p1.x - p2.x;
//   int b = p1.y - p2.y;

//   distance = sqrt(pow(a,2) + pow(b,2));

//   printf("%f\n",distance);

//   return 0;
// }