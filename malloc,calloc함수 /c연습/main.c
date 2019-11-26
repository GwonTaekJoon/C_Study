//
//  main.c
//  c연습
//
//  Created by 권택준 on 21/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

char * ReadUserName(void){
    char * name = (char *)malloc(sizeof(char)*30);
                //서로 같음(char *)calloc(sizeof(char),30);
    printf("What's your name? ");
    fgets(name,30,stdin); //gets함수는 xcode에서 위험한 함수로 판단하여 fgets함수로 바꿨다
    return name;
    
}
int main(){
    char * name1;
    char * name2;
    
    name1 = ReadUserName();
    printf("name1 : %s \n",name1);
    name2 = ReadUserName();
    printf("name2 : %s \n",name2);
    
    printf("again name1: %s \n",name1);
    printf("again name2: %s \n",name2);
    free(name1);
    free(name2);
    return 0;
}
