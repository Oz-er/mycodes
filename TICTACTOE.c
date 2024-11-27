#include <stdio.h>
#include <stdlib.h>

int main()
{     char sel;
      printf("A.Single player \nB.Multiplayer");
     scanf(" %c",&sel);
     if( sel!='Q' && sel!='A' && sel!='B'){
      printf("Invalid selection");
     }
     else if(sel=='Q'){
      return 0;
     }
     else if(sel=='A'){

         printf("A.Myself=O \nB.Computer=X");
                  char compfirstmove;
                  scanf(" %c",&compfirstmove);



         char a=' ',b=' ',c=' ',d=' ',e=' ',f=' ',g=' ',h=' ',i=' ';
          if(compfirstmove=='B'){
                      e='X';
                  }
         while(1){

                      jump3 :
                      printf("%c|%c|%c\n",a,b,c);
                      printf("_____\n");
                      printf("%c|%c|%c\n",d,e,f);
                      printf("_____\n");
                      printf("%c|%c|%c\n",g,h,i);
                      char row,column;
                      printf("Make your move :");
                      scanf(" %c",&row);//very important
                       if(row=='Q'){
                        return 0;
                      }
                       scanf(" %c",&column);
                      if(column=='Q'){
                        return 0;
                      }


                      if(row=='1' && column=='1' && a==' '){
                        a='O';
                     }
                    else if(row=='1' && column=='2' && b==' '){
                        b='O';
                     }
                    else if(row=='1' && column=='3' && c==' '){
                        c='O';
                     }
                    else if(row=='2' && column=='1' && d==' '){
                        d='O';
                     }
                    else if(row=='2' && column=='2' && e==' '){
                        e='O';
                     }
                    else if(row=='2' && column=='3' && f==' '){
                        f='O';
                     }
                    else if(row=='3' && column=='1' && g==' '){
                        g='O';
                     }
                    else if(row=='3' && column=='2' && h==' '){
                        h='O';
                     }
                    else if(row=='3' && column=='3' && i==' '){
                        i='O';
                     }
                     else{
                        printf("Invalid move Try again \n");

                        goto jump3;
                     }
                     if(a==b && b==c && c!=' '){
                           if(c=='X'){
                        printf("Bot wins!");
                        }
                        else if(c=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(d==e && e==f && f!=' '){
                           if(f=='X'){
                        printf("Bot wins!");
                        }
                        else if(f=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(g==h && h==i && i!=' '){
                           if(i=='X'){
                        printf("Bot wins!");
                        }
                        else if(i=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(a==d && d==g && g!=' '){
                           if(g=='X'){
                        printf("Bot wins!");
                        }
                        else if(g=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(b==e && e==h && h!=' '){
                           if(h=='X'){
                        printf("Bot wins!");
                        }
                        else if(h=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(c==f && f==i && i!=' '){
                           if(i=='X'){
                        printf("Bot wins!");
                        }
                        else if(i=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(a==e && e==i && i!=' '){
                           if(i=='X'){
                        printf("Bot wins!");
                        }
                        else if(i=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(c==e && e==g && g!=' '){
                           if(g=='X'){
                        printf("Bot wins!");
                        }
                        else if(g=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(a!=' ' && b!=' ' && c!=' ' && d!=' '
                        && e!=' ' && f!=' ' && g!=' ' && h!=' ' && i!=' '){
                        printf("ITS DRAW");
                        return 0;
                     }
                     if (a == ' ') {
                        a = 'X';
                     } else if (b == ' ') {
                         b = 'X';
                     } else if (c == ' ') {
                         c = 'X';
                     } else if (f == ' ') {
                         f = 'X';
                     } else if (i == ' ') {
                         i = 'X';
                     } else if (h == ' ') {
                         h = 'X';
                     } else if (g == ' ') {
                         g = 'X';
                     } else if (d == ' ') {
                         d = 'X';
                     }

                     if(a==b && b==c && c!=' '){
                           if(c=='X'){
                        printf("Bot wins!");
                        }
                        else if(c=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(d==e && e==f && f!=' '){
                           if(f=='X'){
                        printf("Bot wins!");
                        }
                        else if(f=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(g==h && h==i && i!=' '){
                           if(i=='X'){
                        printf("Bot wins!");
                        }
                        else if(i=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(a==d && d==g && g!=' '){
                           if(g=='X'){
                        printf("Bot wins!");
                        }
                        else if(g=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(b==e && e==h && h!=' '){
                           if(h=='X'){
                        printf("Bot wins!");
                        }
                        else if(h=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(c==f && f==i && i!=' '){
                           if(i=='X'){
                        printf("Bot wins!");
                        }
                        else if(i=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(a==e && e==i && i!=' '){
                           if(i=='X'){
                        printf("Bot wins!");
                        }
                        else if(i=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(c==e && e==g && g!=' '){
                           if(g=='X'){
                        printf("Bot wins!");
                        }
                        else if(g=='O'){
                        printf("You win!");
                        }
                        return 0;
                     }
                     if(a!=' ' && b!=' ' && c!=' ' && d!=' '
                        && e!=' ' && f!=' ' && g!=' ' && h!=' ' && i!=' '){
                        printf("ITS DRAW");
                        return 0;
                     }

         }
     }
      else { int count=0;
         char a=' ',b=' ',c=' ',d=' ',e=' ',f=' ',g=' ',h=' ',i=' ';
          while(1){   jump2 :
                      printf("%c|%c|%c\n",a,b,c);
                      printf("_____\n");
                      printf("%c|%c|%c\n",d,e,f);
                      printf("_____\n");
                      printf("%c|%c|%c\n",g,h,i);
                      char x1,y1;
                     printf("player 1 give row and column 'X':");
                     scanf(" %c",&x1);
                     if(x1=='Q'){
                        return 0;
                      }
                      scanf(" %c",&y1);
                      if(y1=='Q'){
                        return 0;
                      }
                     count++;

                  if(x1=='1' && y1=='1' && a==' '){
                        a='X';
                     }
                    else if(x1=='1' && y1=='2' && b==' '){
                        b='X';
                     }
                    else if(x1=='1' && y1=='3' && c==' '){
                        c='X';
                     }
                    else if(x1=='2' && y1=='1' && d==' '){
                        d='X';
                     }
                    else if(x1=='2' && y1=='2' && e==' '){
                        e='X';
                     }
                    else if(x1=='2' && y1=='3' && f==' '){
                        f='X';
                     }
                    else if(x1=='3' && y1=='1' && g==' '){
                        g='X';
                     }
                    else if(x1=='3' && y1=='2' && h==' '){
                        h='X';
                     }
                    else if(x1=='3' && y1=='3' && i==' '){
                        i='X';
                     }
                     else {
                        printf("Invalid move Try again\n");
                        count--;
                        goto jump2;
                     }
                      if(a==b && b==c && c!=' '){
                           if(c=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(c=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(d==e && e==f && f!=' '){
                           if(f=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(f=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(g==h && h==i && i!=' '){
                           if(i=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(i=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(a==d && d==g && g!=' '){
                           if(g=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(g=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(b==e && e==h && h!=' '){
                           if(h=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(h=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(c==f && f==i && i!=' '){
                           if(i=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(i=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(a==e && e==i && i!=' '){
                           if(i=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(i=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(c==e && e==g && g!=' '){
                           if(g=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(g=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                       if(count==9){
                        printf("draw!");
                        return 0;
                     }
                     jump1 :
                     printf("%c|%c|%c\n",a,b,c);
                      printf("_ _ _\n");
                      printf("%c|%c|%c\n",d,e,f);
                      printf("_ _ _\n");
                      printf("%c|%c|%c\n",g,h,i);
                      printf("player 2 give row and column 'O':");
                      char row2,column2;
                      scanf(" %c",&row2);
                      if(row2=='Q'){
                        return 0;
                      }
                       scanf(" %c",&column2);
                       if(column2=='Q'){
                        return 0;
                      }
                      count++;

                      if(row2=='1' && column2=='1' && a==' '){
                        a='O';
                     }
                    else if(row2=='1' && column2=='2' && b==' '){
                        b='O';
                     }
                    else if(row2=='1' && column2=='3' && c==' '){
                        c='O';
                     }
                    else if(row2=='2' && column2=='1' && d==' '){
                        d='O';
                     }
                    else if(row2=='2' && column2=='2' && e==' '){
                        e='O';
                     }
                    else if(row2=='2' && column2=='3' && f==' '){
                        f='O';
                     }
                    else if(row2=='3' && column2=='1' && g==' '){
                        g='O';
                     }
                    else if(row2=='3' && column2=='2' && h==' '){
                        h='O';
                     }
                    else if(row2=='3' && column2=='3' && i==' '){
                        i='O';
                     }
                     else {
                        printf("Invalid move Try again\n");
                        count--;
                        goto jump1;
                     }
                     if(a==b && b==c && c!=' '){
                           if(c=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(c=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(d==e && e==f && f!=' '){
                           if(f=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(f=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(g==h && h==i && i!=' '){
                           if(i=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(i=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(a==d && d==g && g!=' '){
                           if(g=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(g=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(b==e && e==h && h!=' '){
                           if(h=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(h=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(c==f && f==i && i!=' '){
                           if(i=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(i=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(a==e && e==i && i!=' '){
                           if(i=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(i=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(c==e && e==g && g!=' '){
                           if(g=='X'){
                        printf("Congrats player 1 wins!");
                        }
                        else if(g=='O'){
                        printf("Congrats player 2 wins!");
                        }
                        return 0;
                     }
                     if(count==9){
                        printf("draw!");
                        return 0;
                     }
                  }
     }
     return 0;
}
