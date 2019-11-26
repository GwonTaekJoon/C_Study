#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
    
}Point;

typedef struct circle{
    Point cen;
    double rad;
}Circle;

void ShowCircleInfo(Circle * cptr){
    printf("[%d %d] \n ",(cptr->cen).xpos, (cptr->cen).ypos);
    printf("radius: %g \n\n",cptr->rad);
    
}

int main(){
    Circle c1={{1,2},3.5};//구조체 변수가 멤버로 존재할 경우, 중괄호를 이용해서 구조체 멤버의 초기화를 구분한다.
    Circle c2={2,4,3.9};// 중괄호를 이용해서 구조체 변수의 초기화를 구분 짓지 않으면, 순서대로 초기화 된다. 이 코드에서는 Circle구조체의 가장 상단에 존재하는 변수는 Point구조체 변수이므로 Point 구조체 변수의 첫번째 멤버는 xpos이니 xpos먼저 초기화되고, 이어서 ypos가 초기화된다. 설명 부족 미해결문제 보충필요함
    
    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);
    
    return 0;
}
