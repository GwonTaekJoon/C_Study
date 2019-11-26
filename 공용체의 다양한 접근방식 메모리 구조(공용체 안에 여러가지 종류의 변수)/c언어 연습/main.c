//
//  main.c
//  c언어 연습
//
//  Created by 권택준 on 21/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
typedef struct dbshort{
    unsigned short upper;
    unsigned short lower;
    
}DBshort;

typedef union rdbuf{
    int iBuf;
    char bBuf[4];
    DBshort sBuf;
}RDbuf;

int main() {
    RDbuf buf;
    printf("정수 입력:");
    scanf("%d",&(buf.iBuf));
    
    printf("상위 2바이트: %u \n",buf.sBuf.upper);
    printf("하위 2바이트: %u \n",buf.sBuf.lower);
    printf("상위 1바이트 크기: %c \n",buf.bBuf[0]);
    printf("하위 1바이트 크기: %c \n",buf.bBuf[3]);
    return 0;
}
/*
                메모리 구조
 ! 1byte  !! 1byte  !! 1byte  !! 1byte   !
 bBUF[0]    bBUF[1]    bBUF[2]   bBUF[3]
!      sBuf.upper    !     sBuf.lower    !
!               iBuf                     !
 
 
 
 */
