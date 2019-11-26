//
//  main.c
//  c언어 연습
//
//  Created by 권택준 on 19/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
typedef struct point{
    int xpos;
    int ypos;
    
}Point;
int main() {
    Point pos1 = {1,2};
    Point pos2;
    pos2 = pos1; //pos1의 멤버 대 pos2의 멤버간 복사가 진행된다.
    printf("크기 : %d \n ", sizeof(pos1)); //sizeof함수의 결과로 pos1의 전체 크기가 반환된다. int형 변수가 두개이므로 8반환
    printf("[%d %d] \n ",pos1.xpos, pos1.ypos);
    printf("크기: %d \n",sizeof(pos2));//sizeof함수의 결과로 pos2의 전체 크기가 반환된다. int형 변수가 두개이므로 8반환
    printf("[%d %d] \n ",pos2.xpos,pos2.ypos);
    
    return 0;
}
