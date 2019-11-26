//
//  main.c
//  c연습
//
//  Created by 권택준 on 23/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
#define SQUARE(X) X*X
/*매크로를 두 줄에 걸쳐서 정의하려면 '/'를 쓰면 된다. 예를 들어
#define SQUARE(X)  /
((X)*(X))                   */

int main() {
    int num = 20;
    
    printf("Square of num: %d \n",SQUARE(num));
    printf("Square of -5: %d \n",SQUARE(-5));
    printf("Square of 2.5: %g \n",SQUARE(2.5));
    
    printf("Square of 3+2: %d \n",SQUARE(3+2));
        /*윗줄 코드의 문제점은 원하는 값은 (3+2)*(3+2)이지만
    실제로 함수의 진행은 3+2*3+2가 연산자 우선순위에 의해서 3+6+2가 되었다.
        그럼 원하는 값인 5*5가 되려면 SQUARE((3+2))를 적으면 된다.
         */
         return 0;
}
