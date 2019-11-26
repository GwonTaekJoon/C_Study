//
//  main.c
//  c연습
//
//  Created by 권택준 on 21/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>

int main() {
    int ch,i;
    FILE * fp = fopen("data.txt","rt");
    if(fp==NULL){
        puts("파일 오픈 실패!!");
        return -1;
    }
    
    for(i=0; i<3; i++){
        ch = fgetc(fp);// 문자 하나가 !!int형변수!! ch에 저장된다는 사실을 기억하자!!
        printf("%c \n", ch);
    }
    fclose(fp);
    return 0;
}
