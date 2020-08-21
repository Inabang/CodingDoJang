// #include <stdio.h>

// int main()
// {
//   int numArr[5];
//   int smallestNumber;

//   scanf("%d %d %d %d %d",&numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

//   // smallestNumber = numArr[0] < numArr[1] ? numArr[0] : numArr[1];
//   // smallestNumber = smallestNumber < numArr[2] ? smallestNumber : numArr[2];
//   // smallestNumber = smallestNumber < numArr[3] ? smallestNumber : numArr[3];
//   // smallestNumber = smallestNumber < numArr[4] ? smallestNumber : numArr[4];
  
//   smallestNumber = numArr[0];

//   for(int i = 0; i < sizeof(numArr) / sizeof(int); i++)
//   {
//     smallestNumber = numArr[i] < smallestNumber ? numArr[i] : smallestNumber; 
//   }



//   printf("%d\n",smallestNumber);
//   return 0;
// }