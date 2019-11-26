//
//  main.c
//  c연습
//
//  Created by 권택준 on 19/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//
#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];
    
    /***** case 1 ****/
    strcpy(str2,str1);
    puts(str2);
    
    /**** case 2 ****/
    strncpy(str3, str1, sizeof(str3));
    puts(str3);
    
    
    /***** case 3 ****/
    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1] = 0;
    puts(str3);
    
    return 0;
    
}
    /* case2의 코드는 원래 오류가 나는 코드이다.
     문자열을 다른 배열에 복사하는 과정에서 puts함수는 null값을 만날 때까지 출력하는 함수이기에
     null값이 들어갈 공간을 생각해서 인덱스를 정해줘야한다.
     그러므로 case2의 코드는 문자열이 복사되는 공간에 null값이 들어가는 공간을 확보해주지 않았기 때문에 오류가 나는 코드이다. case3의 코드처럼 복사될 공간의 -1인덱스에 0값 즉, ascii코드로 null값을 넣어줘야 오류가 나지 않는다.*/

