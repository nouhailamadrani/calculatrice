#include <stdio.h>

int main (){
int A , B ;
char operation , q;
printf("entre le nombre A :  ");
scanf("%d", &A );
printf("entre l'operation : ");
scanf("%c", &operation );
printf("entre le nombre B :  ");
scanf("%d", &B );

switch (operation){

case '+' :
printf("%d" , A + B );
 break;
case '-' :
printf("%d" , A - B );
 break;
 case '/' :
 if( B !=0 )
printf("%d" , A / B );
else printf("impossi");
 break;
 case '*' :
printf("%d" , A * B );
 break;
default:
printf("errerrr!");
    break;
}
}

#include <stdio.h>

int main (){
int A , B ;
char operation , q;
printf("entre le nombre A :  ");
scanf("%d", &A );
printf("entre l'operation : ");
scanf("%c", &operation );
printf("entre le nombre B :  ");
scanf("%d", &B );

switch (operation){

case '+' :
printf("%d" , A + B );
 break;
case '-' :
printf("%d" , A - B );
 break;
 case '/' :
 if( B !=0 )
printf("%d" , A / B );
else printf("impossi");
 break;
 case '*' :
printf("%d" , A * B );
 break;
default:
printf("errerrr!");
    break;
}
}

