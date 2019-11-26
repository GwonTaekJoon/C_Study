//
//  main.c
//  c연습
//
//  Created by 권택준 on 23/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
#define HIT_NUM 5
int main() {
#if HIT_NUM==5
    puts("매크로 상수 HIT_NUM은 현재 5입니다.");
    
#else
    puts("매크로 상수 HI_NUM은 현재 5가 아닙니다.");
    
#endif
    /*위 코드는 HIT_NUM이 5로 상수화되어있기 때문에 #else에 해당하는 15행과 16행의 코드는 지워진다. 또한 if문에 else를 추가 할 수 있듯이 #else또한 올 수 있으며, #if는 참과 거짓을 따지는 매크로이기 때문에 비교연산이 올 수 있다. */
    
    
    return 0;
}
