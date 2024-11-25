#include <stdio.h>
#include <string.h>
int main(){

char name1[]={"skill"};
char name2[]={"qode"};
char name3[50];
int len=0;

for(int i=0;i<5;i++,len++){
    name3[len]=name1[i];
}
for(int j=0;j<4;j++,len++){
    name3[len]=name2[j];
}
printf("%s",name3);

return 0;
}