#include <iostream>
// #include<string>
using namespace std;
int main()
{
    int row = 1;
    int rect_length = 113;
    string str = "*";
    string spc = "  ";
    string strSpc = "*"; // 39*2 = 78 chars

    while (row <= 30)
    {
        int col = 1;

        while (col < rect_length) // col lastIteration value  == 39 (true)
        {
            if (row == 1 || row == 30)
            {
                cout << strSpc;
            }
            if (col == 1 && (row < 30 && row > 1))
            { // left line of rect
                cout << str;
            }

            //    N start
            if ((col > 1 && col <= 3) && (row >= 4 && row <= 12))
            {
                cout << spc;
            }
            if ((col >= 4 && col <= 15) && (row <= 12 && row >= 4))
            {
                if (col == row && row != 12)
                {
                    cout << str;
                }
                if (col == 4 && (row <= 12 && row > 4))
                {
                    cout << str;
                }
                if (col == 12 && (row <= 12 && row >= 4))
                {
                    if (row == 12 || row == 4)
                    {
                        cout << " *";
                    }
                    else
                    {

                        cout << str;
                    }
                }
                else
                {
                    cout << spc;
                }
            }
            // letter N finished at col = 15;
            // let I starts
            if (col >= 16 && col <= 24 && (row <= 12 && row >= 4))
            {
                if ((row == 4 || row == 12) && col <= 24)
                {
                    cout << str;
                }

                if ((row != 4 && row != 12) && col == 20)
                {
                    cout << "*";
                }
                else if ((row > 4 && row < 12) && (col <= 24))
                {
                    cout << " ";
                }
            }
            // letter I finished at col=24;
            // T started from 25 col
            if ((col >= 25 && col <= 30) && (row <= 12 && row >= 4))
            {
                cout << " ";
            }
            if (col >= 31 && col <= 41 && (row <= 12 && row >= 4))
            {

                if (col >= 31 && col <= 41 && (row == 4))
                {
                    cout << str;
                }
                if (col == 36 && (row <= 12 && row > 4))
                {
                    cout << str;
                }
                else if (col >= 31 && col <= 41 && (row <= 12 && row > 4))
                {
                    cout << " ";
                }
            } // t end at col =41;
            // E started at col 42

            if ((col >= 42 && col <= 47) && (row <= 12 && row >= 4))
            {
                cout << " ";
            }
            if ((col >= 48 && col <= 58) && (row <= 12 && row >= 4))
            {
                if (col == 48 && (row <= 12 && row >= 4))
                {
                    cout << str;
                }
                if ((col >= 49 && col <= 58) && (row == 4 || row == 8 || row == 12))
                {
                    cout << str;
                }
                else if ((col >= 49 && col <= 58) && (row != 4 || row != 8 || row != 12))
                {
                    cout << " ";
                }
            }

            // E ends at col = 58

            if ((col >= 59 && col <= 64) && (row <= 12 && row >= 4))
            {
                cout << " ";
            }
            // S starts at col = 65
            if ((col >= 65 && col <= 75) && (row <= 12 && row >= 4)) // min 65 max = 75
            {

                if (((col == 65) && (row > 4 && row < 8)) || ((col == 75) && (row > 8 && row < 12)))
                {
                    cout << str;
                }
                if ((col >= 65 && col <= 75) && (row == 4 || row == 8 || row == 12))
                {
                    cout << str;
                }
                else if (((col > 65 && col <= 75) && (row > 4 && row < 8)) || ((col >= 65 && col < 75) && (row > 8 && row < 12)))
                {
                    cout << " ";
                }
            } // s ends at col = 75;
            if ((col >= 76 && col <= 81) && (row <= 12 && row >= 4))
            {
                cout << " ";
            }
            if ((col == 81 || col == 91) && (row <= 12 && row >= 4))
            {
                cout << str;
            }
            if (row == 8 && (col > 81 && col < 91))
            {
                cout << str;
            }

            else if (((row >= 4 && row <= 12)) && (col > 81 && col < 91))
            {
                cout << " ";
            } // H ends at 91

            // name ends here
            if (col < 30 && (row > 15 && row < 30))
            {
                cout << " ";
            }

            if ((row == 22) && (col > 30 && col < 70))
            {
                cout << "*";
            }
            if (col == 30 && row < 22 && row > 15)
            {
                cout << "*"; // str
            }
            if ((col > 30 && col < 50) && (row < 22 && row > 15))
            {
                cout << " "; // spc
            }
            if ((col == 50) && (row < 22 && row > 15))
            {
                cout << "*"; // str
            }
            if ((col >= 30 && col < 50) && (row < 28 && row > 22))
            {
                cout << " "; // spc
            }
            if ((col == 50) && (row < 29 && row > 22))
            {
                cout << "*"; // str
            }

            if ((col >= 30 && col < 50) && (row == 28))
            {
                cout << "*"; // str
            }
            if ((col > 50 && col < 68) && (row <= 28 && row > 22))
            {
                cout << " "; // spc
            }
            if ((col == 69) && (row <= 28 && row > 22))
            {
                cout << "*"; // str
            }
            if ((col > 51 && col < 69) && (row < 22 && row > 16))
            {
                cout << " "; // spc
            }
            if ((col > 51 && col <= 69) && (row == 16))
            {
                cout << "*"; // str
            }
            if ((col == 51) && (row > 16 && row < 22))
            {
                cout << " "; // str
            }
            // sourroundings
            if (row > 1 && row <= 3 && col > 1 && col < 112)
            {
                cout << " ";
            }

            // after Name
            if ((col >= 92 && col < 96) && (row <= 12 && row >= 4))
            {
                cout << " ";
            }
            if ((row > 12 && row <= 15) && col > 1 && col < 112)
            {
                cout << " ";
            }
            if ((row > 15 && row <= 28) && col > 70)
            {
                cout << " ";
            }
            if ((row > 28 && row <= 29) && col > 1 && col < 83)
            {
                cout << " ";
            }
            if (col == 112 && row < 30 && row > 1)
            {
                cout << "*";
            }
            col++;
        }
        row++;
        cout << endl;
    }
    return 0;
}