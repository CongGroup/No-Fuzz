#include<stdio.h>


int a(int count)
{
if(count > 10){
    return 0;}
   printf("a\n");
   b(count+1);
}

int b(int count)
{
if(count > 10){
    return 0;}
   printf("b\n");
   c(count+1);
}
int c(int count)
{
if(count > 10){
    return 0;}
   printf("c\n");
   a(count+1);
}


void test(int a, int b, char c){

printf("this is a test");
}

int main(){

    printf("hello");
    a(0);
    return 0;
}
