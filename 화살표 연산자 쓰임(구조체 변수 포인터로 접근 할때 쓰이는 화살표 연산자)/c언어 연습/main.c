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
    
}Point;/////////구조체
////////////////자료형 포인터 이름
void OrgSymTrans(Point * ptr)
{////// '->'는 화살표 연산자로서 구조체 포인터의 간접접근 화살표 연산자 구조체를 포인터로 접근할 경우
    //"->"으로 접근한다.
    ptr -> xpos = (ptr->xpos) * -1;
    ptr -> ypos = (ptr->ypos) * -1;
}

void ShowPosition(Point pos){
    printf("[%d %d] \n",pos.xpos,pos.ypos);
}
int main(void){
    Point pos = {7,-5};
    OrgSymTrans(&pos);
    ShowPosition(pos);
    OrgSymTrans(&pos);
    ShowPosition(pos);
    return 0;
}
//
