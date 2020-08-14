// #include <stdio.h>
// #include <stdint.h> // 크기별로 정수 자료형이 정의된 헤더 파일

// int main()
// {
//     int8_t num1 = -128; // 8bit (1byte)
//     int16_t num2 = 32767; // 16bit (2byte)
//     int32_t num3 = 214783647; //32bit (3byte)
//     int64_t num4 = 9223372036854775807; //64bit(4byte)

//     printf("%d %d %d %ld\n", num1,num2,num3,num4);


//     uint8_t num5 = 255;
//     uint16_t num6 = 65535;
//     uint32_t num7 = 4294967295; 
//     uint64_t num8 = 18446744073709551615;

//      printf("%u %u %u %lu\n", num5, num6, num7, num8);
// }

//부호없는 정수자료형은 앞에 u를 붙여서한다
// 이런 자료형은 크기를 정확하게 표현해야하는 파일 압축 및 암호화, 네트워크 프로그래밍을 할때 유용하다 
// 일반적인 프로그래밍을 할 때도 처음부터 stdint.h를 사용하는것이 좋다.

// 부호 있는 정수(signed) 최솟값: INT8_MIN, INT16_MIN, INT32_MIN, INT64_MIN
// 부호 있는 정수 최댓값: INT8_MAX, INT16_MAX, INT32_MAX, INT64_MAX
// 부호 없는 정수(unsigned) 최솟값: 0
// 부호 없는 정수 최댓값: UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX