////////////////////////////////////////////////        JINX(TICTACTOE)      ////////////////////////////////////////////////////////////


//MY STRATEGY:
//1.IF THE USER GOES FIRST
    //JINX WILL ALWAYS START WITH THE CENTER IF AVAILABLE
    //SECOND MOVE WILL BE FULL DEFENSIVE
    //JINX WILL START TO WIN IF POSSIBLE FROM THE THIRD MOVE
    //JINX WILL STOP THE USER FROM POTENTIALLY SETTING UP A WINNING MOVE BY READING IT EARLY


//2.IF JINX GOES FIRST
    //JINX WILL ALWAYS START FROM THE CENTER
    //SECOND MOVE OF JINX WILL PRIORITIZE THE CORNERS IF IT IS NOT UNDER A THREAT
    //JINX WILL TRY TO WIN WHEN IT CAN AND BLOCK THE OPPONENT IF A THREAT ARISES



#include<stdio.h>

void print(char a,char b,char c,char d,char e,char f,char g,char h ,char i){       //print the board

    printf("  %c",a);
    printf("  |");
    printf("  %c",b);
    printf("  |");
    printf("  %c\n",c);
    printf("-----");
    printf(" ");

    printf("-----");
    printf(" ");

    printf("-----\n");
    printf("  %c",d);
    printf("  |");
    printf("  %c",e);
    printf("  |");
    printf("  %c\n",f);
    printf("-----");
    printf(" ");

    printf("-----");
    printf(" ");

    printf("-----\n");

    printf("  %c",g);
    printf("  |");
    printf("  %c",h);
    printf("  |");
    printf("  %c\n",i);
}



int validmove(char block) {
    if (block != 'X' && block != 'O') {
    return 1; // Block is valid
    }
    return 0; // Block is occupied
}



int checkwin(char a, char b, char c, char d, char e, char f, char g, char h, char i) {
    // Check rows, columns, and diagonals
    if (a == b && b == c) return 1;
    else if (d == e && e == f) return 1;
    else if (g == h && h == i) return 1;
    else if (a == d && d == g) return 1;
    else if (b == e && e == h) return 1;
    else if (c == f && f == i) return 1;
    else if (a == e && e == i) return 1;
    else if (c == e && e == g) return 1;
    return 0;
}




int main(){

    
restart:
    printf("\n              WELCOME TO THE GAME \n    THE DEVELOPER CHALLENGES YOU TO BEAT JINX \n");
    printf("\nWHAT DO YOU WANT TO PLAY?\n\n    1.JINX(PRESS 1)\n    2.ANOTHER PLAYER(PRESS 2)\n    3.QUIT(PRESS q)\n");

    int choice;
    scanf(" %d",&choice);


    if(choice==1){
        printf("\nWHO WILL MAKE THE FIRST MOVE?\n    a.USER(PRESS a)\n    b.JINX(PRESS b)\n");

        char first;
        scanf(" %c",&first);

        if(first=='q' || first=='Q'){
            printf("\nEXITING THE GAME\n");
            return 0;
        }
        else if(first=='a'){



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


    print(a,b,c,d,e,f,g,h,i);                  //first print of board





/////////////////////////////////////////////////    PLAYERMOVE(1ST)        //////////////////////////////////////////////////////////////////



    printf("\nMAKE YOUR MOVE\n");                //user is going first
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

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



    /////////////////////////////////////////     JINXMOVE(1ST)         ////////////////////////////////////////////////


    //JINXmove

    if(a=='X' || b=='X' || c=='X' ||d=='X' ||f=='X' ||g=='X' ||h=='X' ||i=='X'){
        e='O';
    }
    
    else if(e=='X'){
        c='O';
    }



    print(a,b,c,d,e,f,g,h,i);          //first move of JINX and user





//////////////////////////////////////////////////////     PLAYER MOVE(2ND)   //////////////////////////////////////////////////////////////////////////


    int valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        //user second move
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }








    /////////////////////////////////////////////////////         JINXMOVE(2ND)              ///////////////////////////////////////////////////////////////////////




    if(a=='X' && d=='X'){
        g='O';
    }

    else if(a=='X' && b=='X'){
        c='O';
    }
    else if(a=='X' && c=='X'){
        b='O';
    }
    else if(a=='X' && g=='X'){
        d='O';
    }
    else if(a=='X' && i=='X'){
        d='O';
    }
    else if(a=='X' && f=='X'){
        c='O';
    }
    else if(a=='X'&& h=='X'){
        d='O';
    }
    else if(b=='X' && c=='X'){
        a='O';
    }
    else if(b=='X' && (d=='X' || f=='X'|| g=='X'|| h=='X'|| i=='X')){
        a='O';
    }   
    else if(c=='X' && f=='X'){
        i='O';
    }
    else if(c=='X' && i=='X'){
        f='O';
    }
    else if(c=='X' && g=='X'){
        d='O';
    }

    else if(c=='X' && d=='X') {
        c='O';
    }
    else if(c=='X' && h=='X'){
        f='O';
    }
    else if(d=='X' && g=='X'){
        a='O';
    }
    else if(d=='X' && (f=='X'||h=='X'||i=='X')){
        a='O';
    }
    else if(f=='X' && i=='X'){
        c='O';
    }
    else if(f=='X' && (g=='X'||h=='X'||i=='X')){
        c='O';
    }
    else if(g=='X' && h=='X'){
        i='O';
    }

    else if(g=='X' && i=='X'){
        h='O';
    }

     else if(h=='X' && i=='X'){
        g='O';
    }
    else if(e=='X' && a=='X'){
        i='O';
    }
    else if(e=='X' && i=='X'){
        a='O';
    }
    else if(e=='X' && c=='X'){
        g='O';
    }
    else if(e=='X' && g=='X'){
        a='O';
    }
    else if(e=='X' && d=='X'){
        f='O';
    }
    else if(e=='X'&& f=='X'){
        d='O';
    }
    else if(e=='X' && b=='X'){
        h='O';
    }
    else if(e=='X' && h=='X'){
        b='O';
    }

    //random
    else if(a=='A')a='O';
    else if(b=='B')b='O';
    else if(c=='C')c='O';
    else if(d=='D')d='O';
    else if(e=='E')e='O';
    else if(f=='F')f='O';
    else if(g=='G')g='O';
    else if(h=='H')h='O';
    else if(i=='I')i='O';



    print(a,b,c,d,e,f,g,h,i);      //second JINX and player move







/////////////////////////////////////////      PLAYERMOVE(3RD)    ///////////////////////////////////////////////

    valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }







    ////////////////////////////////////////////          JINXMOVE(3RD)             //////////////////////////////////////////////////////////////////////




////WINNING MOVES

if(a=='O' && b=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && c=='O' && b=='O'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;

}
else if(b=='O' && c=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && e=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && f=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && e=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && h=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && i=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && h=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && d=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && g=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && d=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && e=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && h=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(h=='O' && e=='O' && b=='B'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && f=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && i=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && i=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && e=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && i=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && e=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && e=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && g=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && e=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}



//BLOCKING MOVES



else if(a=='X' && b=='X' && c=='C'){
    c='O';
}
else if(a=='X' && c=='X' && b=='B'){
    b='O';
}
else if(b=='X' && c=='X' && a=='A'){
    a='O';
}
else if(d=='X' && e=='X' && f=='F'){
    f='O';
}
else if(d=='X' && f=='X' && e=='E'){
    e='O';
}
else if(f=='X' && e=='X' && d=='D'){
    d='O';
}
else if(g=='X' && h=='X' && i=='I'){
    i='O';
}
else if(g=='X' && i=='X' && h=='H'){
    h='O';
}
else if(i=='X' && h=='X' && g=='G'){
    g='O';
}
else if(a=='X' && d=='X' && g=='G'){
    g='O';
}
else if(a=='X' && g=='X' && d=='D'){
    d='O';
}
else if(g=='X' && d=='X' && a=='A'){
    a='O';
}
else if(b=='X' && e=='X' && h=='H'){
    h='O';
}
else if(b=='X' && h=='X' && e=='E'){
    e='O';
}
else if(h=='X' && e=='X' && b=='B'){
    b='O';
}
else if(c=='X' && f=='X' && i=='I'){
    i='O';
}
else if(c=='X' && i=='X' && f=='F'){
    f='O';
}
else if(f=='X' && i=='X' && c=='C'){
    c='O';
}
else if(a=='X' && e=='X' && i=='I'){
    i='O';
}
else if(a=='X' && i=='X' && e=='E'){
    e='O';
}
else if(i=='X' && e=='X' && a=='A'){
    a='O';
}
else if(c=='X' && e=='X' && g=='G'){
    g='O';
}
else if(c=='X' && g=='X' && e=='E'){
    e='O';
}
else if(g=='X' && e=='X' && c=='C'){
    c='O';
}




//RANDOM MOVES



else if(a=='A')a='O';
else if(b=='B')b='O';
else if(c=='C')c='O';
else if(d=='D')d='O';
else if(e=='E')e='O';
else if(f=='F')f='O';
else if(g=='G')g='O';
else if(h=='H')h='O';
else if(i=='I')i='O';



print(a,b,c,d,e,f,g,h,i);





//////////////////////////////////////////////////////     PLAYER MOVE(4TH)    ////////////////////////////////////////////////////////////////








    valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        //user 4th move
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }


















////////////////////////////////////////////////////////////         JINXMOVE (4TH)        /////////////////////////////////////////////////////////




////WINNING MOVES

if(a=='O' && b=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && c=='O' && b=='O'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;

}
else if(b=='O' && c=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && e=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && f=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && e=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && h=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && i=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && h=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && d=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && g=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && d=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && e=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && h=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(h=='O' && e=='O' && b=='B'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && f=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && i=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && i=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && e=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && i=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && e=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && e=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && g=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && e=='E' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}



//BLOCKING MOVES



else if(a=='X' && b=='X' && c=='C'){
    c='O';
}
else if(a=='X' && c=='X' && b=='B'){
    b='O';
}
else if(b=='X' && c=='X' && a=='A'){
    a='O';
}
else if(d=='X' && e=='X' && f=='F'){
    f='O';
}
else if(d=='X' && f=='X' && e=='E'){
    e='O';
}
else if(f=='X' && e=='X' && d=='D'){
    d='O';
}
else if(g=='X' && h=='X' && i=='I'){
    i='O';
}
else if(g=='X' && i=='X' && h=='H'){
    h='O';
}
else if(i=='X' && h=='X' && g=='G'){
    g='O';
}
else if(a=='X' && d=='X' && g=='G'){
    g='O';
}
else if(a=='X' && g=='X' && d=='D'){
    d='O';
}
else if(g=='X' && d=='X' && a=='A'){
    a='O';
}
else if(b=='X' && e=='X' && h=='H'){
    h='O';
}
else if(b=='X' && h=='X' && e=='E'){
    e='O';
}
else if(h=='X' && e=='X' && b=='B'){
    b='O';
}
else if(c=='X' && f=='X' && i=='I'){
    i='O';
}
else if(c=='X' && i=='X' && f=='F'){
    f='O';
}
else if(f=='X' && i=='X' && c=='C'){
    c='O';
}
else if(a=='X' && e=='X' && i=='I'){
    i='O';
}
else if(a=='X' && i=='X' && e=='E'){
    e='O';
}
else if(i=='X' && e=='X' && a=='A'){
    a='O';
}
else if(c=='X' && e=='X' && g=='G'){
    g='O';
}
else if(c=='X' && g=='X' && e=='E'){
    e='O';
}
else if(g=='X' && e=='X' && c=='C'){
    c='O';
}




//RANDOM MOVES



else if(a=='A')a='O';
else if(b=='B')b='O';
else if(c=='C')c='O';
else if(d=='D')d='O';
else if(e=='E')e='O';
else if(f=='F')f='O';
else if(g=='G')g='O';
else if(h=='H')h='O';
else if(i=='I')i='O';
    print(a,b,c,d,e,f,g,h,i);






//////////////////////////////////////////////////////     PLAYER MOVE(5TH)    ////////////////////////////////////////////////////////////////








    valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        //user 4th move
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }



    printf("\n!!!!!!HARD LUCK !!!!!\n    ITS A DRAW\n");

    goto restart;





    // goto restart;

}
        else if(first=='b'){



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

int valid =0;




/////////////////////////////   JINX1ST     /////////////////////////////


e='O';

print(a,b,c,d,e,f,g,h,i);




////////////////////////////   PLAYERFIRST //////////////////////////////




    printf("MAKE YOUR MOVE\n");                
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

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
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
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


    // print(a,b,c,d,e,f,g,h,i);




////////////////////////////////////   JINX(2ND)       ///////////////////////////////////////////




        if(a=='A')a='O';
        else if(c=='C')c='O';
        else if(e=='E')e='O';
        else if(g=='G')g='O';
        else if(i=='I')i='O';
        else if(b=='B')b='O'; 
        else if(d=='D')d='O'; 
        else if(f=='F')f='O';
        else if(h=='H')h='O';
        



        print(a,b,c,d,e,f,g,h,i);




//////////////////////////////////  PLAYER(2ND)       //////////////////////////////////////////




    valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        //user second move
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }







///////////////////////////////    JINX(3RD)    ///////////////////////////////////////









////WINNING MOVES

if(a=='O' && b=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && c=='O' && b=='O'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;

}
else if(b=='O' && c=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && e=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && f=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && e=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && h=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && i=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && h=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && d=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && g=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && d=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && e=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && h=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(h=='O' && e=='O' && b=='B'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && f=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && i=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && i=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && e=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && i=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && e=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && e=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && g=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && e=='E' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}



//BLOCKING MOVES



else if(a=='X' && b=='X' && c=='C'){
    c='O';
}
else if(a=='X' && c=='X' && b=='B'){
    b='O';
}
else if(b=='X' && c=='X' && a=='A'){
    a='O';
}
else if(d=='X' && e=='X' && f=='F'){
    f='O';
}
else if(d=='X' && f=='X' && e=='E'){
    e='O';
}
else if(f=='X' && e=='X' && d=='D'){
    d='O';
}
else if(g=='X' && h=='X' && i=='I'){
    i='O';
}
else if(g=='X' && i=='X' && h=='H'){
    h='O';
}
else if(i=='X' && h=='X' && g=='G'){
    g='O';
}
else if(a=='X' && d=='X' && g=='G'){
    g='O';
}
else if(a=='X' && g=='X' && d=='D'){
    d='O';
}
else if(g=='X' && d=='X' && a=='A'){
    a='O';
}
else if(b=='X' && e=='X' && h=='H'){
    h='O';
}
else if(b=='X' && h=='X' && e=='E'){
    e='O';
}
else if(h=='X' && e=='X' && b=='B'){
    b='O';
}
else if(c=='X' && f=='X' && i=='I'){
    i='O';
}
else if(c=='X' && i=='X' && f=='F'){
    f='O';
}
else if(f=='X' && i=='X' && c=='C'){
    c='O';
}
else if(a=='X' && e=='X' && i=='I'){
    i='O';
}
else if(a=='X' && i=='X' && e=='E'){
    e='O';
}
else if(i=='X' && e=='X' && a=='A'){
    a='O';
}
else if(c=='X' && e=='X' && g=='G'){
    g='O';
}
else if(c=='X' && g=='X' && e=='E'){
    e='O';
}
else if(g=='X' && e=='X' && c=='C'){
    c='O';
}




//RANDOM MOVES



else if(a=='A')a='O';
else if(b=='B')b='O';
else if(c=='C')c='O';
else if(d=='D')d='O';
else if(e=='E')e='O';
else if(f=='F')f='O';
else if(g=='G')g='O';
else if(h=='H')h='O';
else if(i=='I')i='O';



print(a,b,c,d,e,f,g,h,i);




//////////////////////////////////////////////      PLAYER(3RD)      ////////////////////////////////////////////




    valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        //user third move
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }









/////////////////////////////////////////////////////   JINX(4TH)   //////////////////////////////////////////////////////











////WINNING MOVES

if(a=='O' && b=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && c=='O' && b=='O'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;

}
else if(b=='O' && c=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && e=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && f=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && e=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && h=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && i=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && h=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && d=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && g=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && d=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && e=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && h=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(h=='O' && e=='O' && b=='B'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && f=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && i=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && i=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && e=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && i=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && e=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && e=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && g=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && e=='E' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}



//BLOCKING MOVES



else if(a=='X' && b=='X' && c=='C'){
    c='O';
}
else if(a=='X' && c=='X' && b=='B'){
    b='O';
}
else if(b=='X' && c=='X' && a=='A'){
    a='O';
}
else if(d=='X' && e=='X' && f=='F'){
    f='O';
}
else if(d=='X' && f=='X' && e=='E'){
    e='O';
}
else if(f=='X' && e=='X' && d=='D'){
    d='O';
}
else if(g=='X' && h=='X' && i=='I'){
    i='O';
}
else if(g=='X' && i=='X' && h=='H'){
    h='O';
}
else if(i=='X' && h=='X' && g=='G'){
    g='O';
}
else if(a=='X' && d=='X' && g=='G'){
    g='O';
}
else if(a=='X' && g=='X' && d=='D'){
    d='O';
}
else if(g=='X' && d=='X' && a=='A'){
    a='O';
}
else if(b=='X' && e=='X' && h=='H'){
    h='O';
}
else if(b=='X' && h=='X' && e=='E'){
    e='O';
}
else if(h=='X' && e=='X' && b=='B'){
    b='O';
}
else if(c=='X' && f=='X' && i=='I'){
    i='O';
}
else if(c=='X' && i=='X' && f=='F'){
    f='O';
}
else if(f=='X' && i=='X' && c=='C'){
    c='O';
}
else if(a=='X' && e=='X' && i=='I'){
    i='O';
}
else if(a=='X' && i=='X' && e=='E'){
    e='O';
}
else if(i=='X' && e=='X' && a=='A'){
    a='O';
}
else if(c=='X' && e=='X' && g=='G'){
    g='O';
}
else if(c=='X' && g=='X' && e=='E'){
    e='O';
}
else if(g=='X' && e=='X' && c=='C'){
    c='O';
}




//RANDOM MOVES



else if(a=='A')a='O';
else if(b=='B')b='O';
else if(c=='C')c='O';
else if(d=='D')d='O';
else if(e=='E')e='O';
else if(f=='F')f='O';
else if(g=='G')g='O';
else if(h=='H')h='O';
else if(i=='I')i='O';



print(a,b,c,d,e,f,g,h,i);






////////////////////////////////////////////      PLAYER(4TH)      /////////////////////////////////////////////////////




     valid=0;

    while(valid==0){
    printf("\nMAKE YOUR MOVE\n");        //user second move
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
        a='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
        b='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
        c='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
        d='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
        e='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
        f='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
        g='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
        h='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
        i='X';
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    }










////////////////////////////////////////////         JINX(5TH)          ////////////////////////////////////////////////





////WINNING MOVES

if(a=='O' && b=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && c=='O' && b=='O'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;

}
else if(b=='O' && c=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && e=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(d=='O' && f=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && e=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && h=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && i=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && h=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && d=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && g=='O' && d=='D'){
    d='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && d=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && e=='O' && h=='H'){
    h='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(b=='O' && h=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(h=='O' && e=='O' && b=='B'){
    b='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && f=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && i=='O' && f=='F'){
    f='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(f=='O' && i=='O' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && e=='O' && i=='I'){
    i='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(a=='O' && i=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(i=='O' && e=='O' && a=='A'){
    a='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && e=='O' && g=='G'){
    g='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(c=='O' && g=='O' && e=='E'){
    e='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}
else if(g=='O' && e=='E' && c=='C'){
    c='O';
    print(a,b,c,d,e,f,g,h,i);

    printf("\n!!!!! JINX WINS !!!!!");
    goto restart;
}



//BLOCKING MOVES



else if(a=='X' && b=='X' && c=='C'){
    c='O';
}
else if(a=='X' && c=='X' && b=='B'){
    b='O';
}
else if(b=='X' && c=='X' && a=='A'){
    a='O';
}
else if(d=='X' && e=='X' && f=='F'){
    f='O';
}
else if(d=='X' && f=='X' && e=='E'){
    e='O';
}
else if(f=='X' && e=='X' && d=='D'){
    d='O';
}
else if(g=='X' && h=='X' && i=='I'){
    i='O';
}
else if(g=='X' && i=='X' && h=='H'){
    h='O';
}
else if(i=='X' && h=='X' && g=='G'){
    g='O';
}
else if(a=='X' && d=='X' && g=='G'){
    g='O';
}
else if(a=='X' && g=='X' && d=='D'){
    d='O';
}
else if(g=='X' && d=='X' && a=='A'){
    a='O';
}
else if(b=='X' && e=='X' && h=='H'){
    h='O';
}
else if(b=='X' && h=='X' && e=='E'){
    e='O';
}
else if(h=='X' && e=='X' && b=='B'){
    b='O';
}
else if(c=='X' && f=='X' && i=='I'){
    i='O';
}
else if(c=='X' && i=='X' && f=='F'){
    f='O';
}
else if(f=='X' && i=='X' && c=='C'){
    c='O';
}
else if(a=='X' && e=='X' && i=='I'){
    i='O';
}
else if(a=='X' && i=='X' && e=='E'){
    e='O';
}
else if(i=='X' && e=='X' && a=='A'){
    a='O';
}
else if(c=='X' && e=='X' && g=='G'){
    g='O';
}
else if(c=='X' && g=='X' && e=='E'){
    e='O';
}
else if(g=='X' && e=='X' && c=='C'){
    c='O';
}




//RANDOM MOVES



else if(a=='A')a='O';
else if(b=='B')b='O';
else if(c=='C')c='O';
else if(d=='D')d='O';
else if(e=='E')e='O';
else if(f=='F')f='O';
else if(g=='G')g='O';
else if(h=='H')h='O';
else if(i=='I')i='O';



print(a,b,c,d,e,f,g,h,i);





    printf("\n!!!!!!HARD LUCK !!!!!\n    ITS A DRAW\n");

    goto restart;


           
        }

        }
    else if(choice==2){


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



    print(a,b,c,d,e,f,g,h,i);                  //first print of board



    int count=1;

while(a=='A' || b=='B' || c=='C' || d=='D' || e=='E' || f=='F' || g=='G' || h=='H' || i=='I'){
        int valid=0;

    while(valid==0){
    if(count%2!=0){
    printf("\nPLAYER 1 MAKE YOUR MOVE\n");
    }
    else printf("\nPLAYER 2 MAKE YOUR MOVE\n");
    scanf(" %c",&move);

    if(move=='q' || move=='Q'){
        printf("\nEXITING THE GAME\n");
        return 0;
    }

    
    if(move== 'a' || move== 'A'){
        if(validmove(a)){
            if(count%2!=0){
            a='X';
            count++;
            }
            else {
            a='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'b' || move== 'B'){
        if(validmove(b)){
            if(count%2!=0){
            b='X';
            count++;
            }
            else {
            b='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'c' || move== 'C'){
        if(validmove(c)){
            if(count%2!=0){
            c='X';
            count++;
            }
            else{
            c='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'd' || move== 'D'){
        if(validmove(d)){
            if(count%2!=0){
            d='X';
            count++;
            }
            else {
            d='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'e' || move== 'E'){
        if(validmove(e)){
            if(count%2!=0){
            e='X';
            count++;
            }
            else {
            e='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'f' || move== 'F'){
        if(validmove(f)){
            if(count%2!=0){
            f='X';
            count++;
            }
            else {
            f='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'g' || move== 'G'){
        if(validmove(g)){
            if(count%2!=0){
            g='X';
            count++;
            }
            else {
            g='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'h' || move== 'H'){
        if(validmove(h)){
            if(count%2!=0){
            h='X';
            count++;
            }
            else {
            h='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }
    if(move== 'i' || move== 'i'){
        if(validmove(i)){
            if(count%2!=0){
            i='X';
            count++;
            }
            else {
            i='O';
            count++;
            }
        valid=1;
        }
        else{
            printf("!!! INVALID MOVE...TRY AGAIN  !!!!");
            valid=0;
        }
    }

    printf("\n");
    print(a,b,c,d,e,f,g,h,i);

    }
    if(checkwin(a,b,c,d,e,f,g,h,i)){
        if(count%2==0){
        printf("\n!!!! PLAYER 1 WINS !!!!\n");
        }
        else printf("\n!!!! PLAYER 2 WINS !!!!\n");
        goto restart;
    }
}


printf("\n!!!! ITS A BORING DRAW !!!!\n");

goto restart;


    }
    else {
        printf("\nEXITING THE GAME\n");
        return 0;
    }
}