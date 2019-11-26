//
//  main.c
//  c연습
//
//  Created by 권택준 on 23/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
#define ADD 1 //참
#define MIN 0 //거짓

int main() {
    int num1, num2;
    
    printf("두 개의 정수 입력:");
    scanf("%d %d",&num1,&num2);
    
    
#if ADD //ADD가 '참'이라면
    printf("%d + %d = %d \n",num1,num2,num1+num2);
    
#endif
    
#if MIN //MIN이 '참'이라면
    printf("%d - %d = %d \n",num1,num2,num1-num2);
    
    
#endif
    /* 위 코드는 매크로 변수로 ADD가 참이고 MIN이 거짓이기 때문에 항상 ADD가 실행된다.*/
    return 0;
}
