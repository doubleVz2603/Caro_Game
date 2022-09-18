#include "CaroBoardView.h"

CaroBoardView::CaroBoardView() {}

void CaroBoardView::showCaroBoard(char **caroBoard)
{

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << caroBoard[i][j] << "|";
        }
        cout << endl
             << "----------------------" << endl;
    }
}

void CaroBoardView::save(Player *listPlayer)
{
    ofstream fout;

    fout.open("history.txt", ios::app);
    for (int i = 0; i < 2; i++)
    {
        fout << "name: " << listPlayer[i].getName() << endl;
        fout << "Win: " << listPlayer[i].getWin() << endl;

        fout << "Draw: " << listPlayer[i].getDraw() << endl;
        fout << "Lose: " << listPlayer[i].getLose() << endl;
    }

    // Execute a loop If file successfully opened

    // Close the File
    fout.close();
}