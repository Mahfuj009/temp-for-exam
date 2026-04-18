#include<stdio.h>
#include<string.h>

int length(char a[]){
    int len = 0;
    for(int i = 0; a[i] != '\0';i++){
        len++;
    }
    return len;
}

int main(){

char n[] = "Mahfuj";
int len = length(n);

printf("using loop : %d\nusing strlen() :%d\n",len,strlen(n));


//reversing a string

char name[] = "Hello";
char rev[33];

int j = 0;
for(int i = length(name)-1; i>=0; i--){
    rev[j] = name[i];
    j++;
}
rev[j] = '\0';
printf("%s",rev);


//using new line
printf("dfdsfjdslfdsfds \
       dfdsfsdf\n\n");

char school[50];
gets(school);
puts(school);


//converting lowercase to upper case
printf("converting lowercase to upper case\nEnter sentence : ");
char sen[50];
gets(sen);
for(int i =0; i<strlen(sen); i++){
    if(sen[i]>='a' && sen[i] <= 'z'){
        sen[i] = sen[i] - 'a' + 'A';
    }
}
puts(sen);


//counting the total number of words
printf("counting the total number of words\nenter sentence :");
char sen2[50];
gets(sen2);
int ct = 0;
for(int i = 0; i < strlen(sen2); i++){
    if(sen2[i]==' ')
        ct ++;
}
if(strlen(sen2)<1){
    printf("0");
}
else{
    printf("\n%d \n",ct+1);
}


//separate individual characters:
printf("separate individual characters\nEnter the sentence : ");
char sen3[50];
gets(sen3);
for(int i = 0; sen3[i] != '\0'; i++){
    if(sen3[i] == ' ') continue;
    printf("%c ",sen3[i]);
}

//print in reverse order:
printf("print in reverse order:\nEnter a sentence : ");
char sen4[50];
char revo[50];
gets(sen4);
 j = 0;
for(int i = strlen(sen4)-1; i>=0; i--){
    revo[j] = sen4[i];
    j++;
}
revo[j] = '\0';
puts(revo);
//string is palindrome or not
printf("string is palindrome or not : \nEnter the sentence : ");
char sen6[100]; gets(sen6);
char senn[100];
j = 0;
for(int i = 0; sen6[i]!= '\0'; i++){
    if(sen6[i] == ' ') continue;
    senn[j] = sen6[i];
    j++;
}
puts(senn);
senn[j] = '\0';
char revv[100];
j = 0;
for(int i = strlen(senn)-1; i>=0; i--){
    revv[j] = senn[i];
    j++;
}
revv[j] = '\0';
puts(revv);
for(int i = 0; senn[i]!='\0'; i++){
    if(senn[i] != revv[i]){
        printf("\nNot a palindrome");
        return 0;
    }
}
printf("\nPalindrome");
}
