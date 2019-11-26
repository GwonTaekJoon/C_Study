//
//  main.c
//  c연습
//
//  Created by 권택준 on 19/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main() {
    char str1[20] = "First~"; // 이 문자열에 문자열을 할당된 크기보다 많이 넣으면 버퍼오버플로우
    char str2[20] = "Second";
    
    char str3[20] = "Simple num: ";
    char str4[20] = "1234567890";
    
    /*** case 1 ***/
    strcat(str1, str2);
    puts(str1);
    
    strncat(str3, str4, 7); // 실제로는 인자가 7이더라도 널문자를 자동으로 삽입하기에 8만큼 덧붙임
    puts(str3);
    return 0;
    //문자열을 덧붙일 때 메모리공간이 늘어나는 것이 아니기 때문에 주의해야한다.
    /*strncpy함수와 달리 strncat함수는 문자열의 끝에 널 문자를 자동으로 삽입해준다.*/
}
