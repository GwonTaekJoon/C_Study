//
//  main.c
//  c연습
//
//  Created by 권택준 on 21/09/2019.
//  Copyright © 2019 권택준. All rights reserved.
//

#include <stdio.h>

int main() {
    
    FILE * fp = fopen("data.txt","wt");
    //FILE * fp = fopen("C://Project//data.txt","wt");이와 같이 경로를 직접 설정해 줄 수 있으며 다음 경로는 '//'로 나타낸다.
    if(fp==NULL){
        puts("파일오픈 실패!");
        return -1;
    }
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);
    return 0;
}
