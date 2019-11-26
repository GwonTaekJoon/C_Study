
/* 아래와 같은 코드는 문자열을 비교하는 코드가 아닌 변수의 주소를 비교하는 코드가 된다. 그렇기 때문에
 문자열을 비교하려면 strcmp,strncmp함수를 써야한다.
strcmp,strncmp함수는 전자가 더 크면 0보다 큰값 반환, 후자가 더 크면 0보다 작은 값 반환
 서로 같으면 0을 반환한다.
 strncmp함수는 비교하는 범위를 정할 수 있다.
 문자열의 크고 작음은 ascii코드가 기준이 된다.
#include <stdio.h>

int main() {
    
    char str1[] = "My String";
    char str2[] = "My String";
    
    if(str1==str2){
        puts("equal");
    }
    else{
        puts("not equal");
    }
    return 0;
}
*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str1[20];
    char str2[20];
    printf("문자열 입력 1: ");
    scanf("%s",str1);
    printf("문자열 입력 2: ");
    scanf("%s",str2);
    
    if(!strcmp(str1,str2))
    {
        puts("두 문자열은 완벽히 동일합니다.");
    }
    else{
        puts("두 문자열은 동일하지 않습니다.");
        if(!strncmp(str1,str2,3)){
            puts("그러나 앞 세 글자는 동일합니다.");
        }
    }
    return 0;
}



