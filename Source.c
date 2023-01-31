#include <stdio.h>
#include <conio.h>  //getch()
#include <stdlib.h> //system()
char arr[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void showBoard();
int checkForWin();

// Driver Function
int main()
{
    int player = 1;
    int choice, i;
    char mark; // X or O

    do
    {
        showBoard();
        player = (player%2==0) ? 2:1; // player++
        printf("\n\tPlayer %d turn :", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && arr[1] == '1')
            arr[1] = mark;
        else if (choice == 2 && arr[2] == '2')
            arr[2] = mark;
        else if (choice == 3 && arr[3] == '3')
            arr[3] = mark;
        else if (choice == 4 && arr[4] == '4')
            arr[4] = mark;
        else if (choice == 5 && arr[5] == '5')
            arr[5] = mark;
        else if (choice == 6 && arr[6] == '6')
            arr[6] = mark;
        else if (choice == 7 && arr[7] == '7')
            arr[7] = mark;
        else if (choice == 8 && arr[8] == '8')
            arr[8] = mark;
        else if (choice == 9 && arr[9] == '9')
            arr[9] = mark;

        else // player==1 ----10
        {
            printf("\t\tInvalid value\n");
            player--;
            getch();
        }

        i = checkForWin(); //-1,0,1
        player++;
    } while (i == -1);

    showBoard();
    if (i == 1)
    {
        printf("\t\tPlayer %d Won\n", --player);
    }
    else
    {
        printf("\t\tGame Draw\n");
    }

    getch();
    return 0;
}

// Function to print the Tic Tac Toe board
void showBoard()
{
    system("cls");
    printf("\t\t\t\t  Go Back to Childhood and Enjoy the Game\n");
    printf("\t\t\t\t\t\tTic Tac Toe\n");
    printf("\t\t\t\t\tPlayer 1 (X) -- Player 2 (O)\n\n");
    printf("\t\t\t\t\t       |       |      \n");
    printf("\t\t\t\t\t       |       |      \n");
    printf("\t\t\t\t\t   %c   |   %c   |   %c   \n", arr[1], arr[2], arr[3]);
    printf("\t\t\t\t\t-------|-------|-------\n");
    printf("\t\t\t\t\t       |       |      \n");
    printf("\t\t\t\t\t   %c   |   %c   |   %c   \n", arr[4], arr[5], arr[6]);
    printf("\t\t\t\t\t       |       |      \n");
    printf("\t\t\t\t\t-------|-------|-------\n");
    printf("\t\t\t\t\t       |       |      \n");
    printf("\t\t\t\t\t   %c   |   %c   |   %c   \n", arr[7], arr[8], arr[9]);
    printf("\t\t\t\t\t       |       |      \n");
    printf("\n\n");
}

// A function to check if the has won or not.
int checkForWin()
{// horizontal matching condition...
    if (arr[1] == arr[2] && arr[2] == arr[3])
        return 1;
    else if (arr[4] == arr[5] && arr[5] == arr[6])      // horizontal match...
        return 1;
    else if (arr[7] == arr[8] && arr[8] == arr[9])
        return 1;

    // vartical matching condition...
    else if (arr[1] == arr[4] && arr[4] == arr[7])
        return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8])      // vartical match...
        return 1;
    else if (arr[3] == arr[6] && arr[6] == arr[9])
        return 1;

    // transverse matching condition...
    else if (arr[1] == arr[5] && arr[5] == arr[9])      // transverse match...
        return 1;
    else if (arr[3] == arr[5] && arr[5] == arr[7])
        return 1;

    // no matching condition...
    else if (arr[1]!= '1' && arr[2]!= '2' && arr[3]!= '3' && arr[4]!= '4' && arr[5]!= '5' && arr[6]!= '6' && arr[7]!= '7' && arr[8]!= '8' && arr[9]!= '9')      // no match...
        return 0;
    else {
        return -1;
    }
}
