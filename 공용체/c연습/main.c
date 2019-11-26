//
//  main.c
//  c연습
//
//  Created by 권택준 on 21/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
typedef union ubox{
    int mem1;
    int mem2;
    double mem3;
    
}Ubox;


int main() {
    Ubox ubx; //바이트 메모리 할당 공용체는 구조체와 달리 모든 변수 크기의 합이 메모리에 할당되는 것이아니라 가장 큰 변수 크기를 기준으로 메모리에 할당된다.
    ubx.mem1=20;
    printf("%d \n",ubx.mem2); // 공용체는 서로 메모리를 공유하기때문에 윗줄에 초기화된 값이 출력된다.
    
    ubx.mem3=7.15;
    printf("%d \n",ubx.mem1);
    printf("%d \n",ubx.mem2); //double형을 int형으로 출력해서 쓰레기값이 출력된다.
    printf("%g \n",ubx.mem3);
    return 0;
}
