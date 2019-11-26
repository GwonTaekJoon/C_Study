//
//  main.c
//  c언어 연습
//
//  Created by 권택준 on 20/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
typedef struct point{
    int xpos;
    int ypos;

}Point;

Point Addpoint(Point pos1, Point pos2){
    Point pos = {pos1.xpos+pos2.xpos, pos1.ypos+pos2.ypos};
    return pos;
}
Point MinPoint(Point pos1, Point pos2){
    Point pos = {pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos};
    return pos;
}
int main() {
    Point pos1 = {5,6};
    Point pos2 = {2,9};
    Point result;
    
    result = Addpoint(pos1,pos2);
    printf("[%d %d] \n",result.xpos, result.ypos);
    result = MinPoint(pos1,pos2);
    printf("[%d %d] \n",result.xpos,result.ypos);
    return 0;
    /*구조체 변수 대상으로도 덧셈과 뺄셈이 가능할 것 처럼 보이지만  구조체 안에는 배열도 존재할 수 있고 포인터 변수도 존재할 수 있기에 구조체 변수 대상의 덧셈과 뺄셈연산의 결과를 정형화 할 수 없다.
    그렇기에 따로 함수를 정의하여 계산하자.*/
}


