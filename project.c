#include<stdio.h>

void print(char a,char b,char c,char d,char e,char f,char g,char h ,char i){

    printf("%c",a);
    printf("|");
    printf("%c",b);
    printf("|");
    printf("%c\n",c);
    printf("-");
    printf(" ");

    printf("-");
    printf(" ");

    printf("-\n");
    printf("%c",d);
    printf("|");
    printf("%c",e);
    printf("|");
    printf("%c\n",f);
    printf("-");
    printf(" ");

    printf("-");
    printf(" ");

    printf("-\n");

    printf("%c",g);
    printf("|");
    printf("%c",h);
    printf("|");
    printf("%c\n",i);
}


int main(){



    char a='A';
    char b='B';
    char c='C';
    char d='D';
    char e='E';
    char f='F';
    char g='G';
    char h='H';
    char i='I';

    char move;

    print(a,b,c,d,e,f,g,h,i);

    printf("make your move\n");

    scanf("%c",&move);

    if(move== 'a' || move== 'A'){
        a='X';
    }
    if(move== 'b' || move== 'B'){
        b='X';
    }
    if(move== 'c' || move== 'C'){
        c='X';
    }
    if(move== 'd' || move== 'D'){
        d='X';
    }
    if(move== 'e' || move== 'E'){
        e='X';
    }
    if(move== 'f' || move== 'F'){
        f='X';
    }
    if(move== 'g' || move== 'G'){
        g='X';
    }
    if(move== 'h' || move== 'H'){
        h='X';
    }
    if(move== 'i' || move== 'i'){
        i='X';
    }

    if(a=='X' || b=='X' || c=='X' ||d=='X' ||f=='X' ||g=='X' ||h=='X' ||i=='X'){
        e='O';
    }
    
    else if(e=='X'){
        g='O';
    }

    print(a,b,c,d,e,f,g,h,i);

    printf("make your move\n");
    scanf(" %c",&move);

    if(move== 'a' || move== 'A'){
        a='X';
    }
    if(move== 'b' || move== 'B'){
        b='X';
    }
    if(move== 'c' || move== 'C'){
        c='X';
    }
    if(move== 'd' || move== 'D'){
        d='X';
    }
    if(move== 'e' || move== 'E'){
        e='X';
    }
    if(move== 'f' || move== 'F'){
        f='X';
    }
    if(move== 'g' || move== 'G'){
        g='X';
    }
    if(move== 'h' || move== 'H'){
        h='X';
    }
    if(move== 'i' || move== 'i'){
        i='X';
    }

    //botmove

    if(d=='X'){
        g='O';
    }

    else if(b=='X'){
        c='O';
    }
    else if(c=='X'){
        b='O';
    }
    else if(g=='X'){
        d='O';
    }
    else if(i=='X'){
        d='O';
    }

    else if(f=='X' || h=='X'){
        g='O';
    }


    print(a,b,c,d,e,f,g,h,i);

    //player move

    printf("make your move\n");
    scanf(" %c",&move);

    if(move== 'a' || move== 'A'){
        a='X';
    }
    if(move== 'b' || move== 'B'){
        b='X';
    }
    if(move== 'c' || move== 'C'){
        c='X';
    }
    if(move== 'd' || move== 'D'){
        d='X';
    }
    if(move== 'e' || move== 'E'){
        e='X';
    }
    if(move== 'f' || move== 'F'){
        f='X';
    }
    if(move== 'g' || move== 'G'){
        g='X';
    }
    if(move== 'h' || move== 'H'){
        h='X';
    }
    if(move== 'i' || move== 'i'){
        i='X';
    }

    //botmove
    
    if(g=='O'&& e=='O'&& c=='C'){
        c='O';

    print(a,b,c,d,e,f,g,h,i);

    printf("bot wins");

    return 0;
    }

    else if(c=='O'&& e=='O'&& g=='G'){
        g='O';

    print(a,b,c,d,e,f,g,h,i);

    printf("bot wins");

    return 0;
    }

    else if(b=='O'&& e=='O'&& h=='H'){
        h='O';

    print(a,b,c,d,e,f,g,h,i);

    printf("bot wins");

    return 0;
    }

    else if(d=='O'&& e=='O'&& f=='F'){
        f='O';

    print(a,b,c,d,e,f,g,h,i);

    printf("bot wins");

    return 0;
    }
















}