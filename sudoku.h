#pragma once

using namespace std;


// Sample problems for the game.
// Easy Level
int easy1[9][9]  =
{
  {6, 8, 0, 0, 0, 7, 1, 0, 0},
  {0, 2, 0, 9, 1, 5, 8, 0, 7},
  {9, 0, 0, 6, 0, 3, 5, 2, 0},
  {0, 5, 6, 0, 0, 2, 0, 0, 0},
  {3, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 9, 2, 0, 6, 0, 0, 5, 8},
  {7, 0, 0, 0, 5, 6, 0, 8, 1},
  {0, 0, 8, 3, 4, 9, 0, 0, 6},
  {0, 0, 0, 8, 0, 1, 4, 3, 0},
};


int easy2[9][9]  =
{
  {0, 0, 7, 0, 6, 0, 2, 0, 0},
  {0, 0, 2, 1, 0, 0, 0, 8, 7},
  {5, 0, 0, 2, 4, 0, 0, 1, 0},
  {7, 0, 4, 9, 5, 8, 1, 6, 0},
  {0, 8, 0, 3, 0, 2, 0, 7, 9},
  {2, 1, 0, 0, 7, 0, 0, 0, 0},
  {9, 2, 0, 0, 8, 0, 3, 4, 0},
  {4, 7, 3, 0, 0, 0, 0, 0, 1},
  {8, 0, 0, 0, 3, 9, 0, 0, 0},
};


int easy3[9][9]  =
{
  {0, 0, 0, 0, 2, 0, 5, 6, 8},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 8, 7, 9, 1, 0, 3, 4, 2},
  {4, 7, 0, 1, 3, 0, 0, 0, 0},
  {0, 6, 2, 0, 9, 0, 0, 0, 0},
  {0, 3, 0, 7, 6, 0, 2, 1, 0},
  {0, 0, 5, 8, 0, 0, 0, 2, 6},
  {7, 0, 0, 3, 0, 9, 8, 5, 0},
  {8, 9, 1, 2, 5, 0, 0, 0, 3},
};


int easy4[9][9]  =
{
  {0, 0, 0, 3, 1, 0, 0, 2, 0},
  {4, 0, 0, 0, 8, 0, 0, 1, 0},
  {9, 0, 7, 4, 0, 2, 3, 8, 0},
  {0, 8, 0, 6, 0, 7, 9, 0, 0},
  {0, 0, 6, 0, 0, 0, 0, 0, 0},
  {0, 4, 3, 0, 0, 0, 0, 5, 2},
  {8, 6, 5, 0, 0, 4, 2, 3, 0},
  {0, 7, 0, 2, 0, 1, 8, 9, 5},
  {1, 2, 0, 0, 3, 5, 0, 0, 7},
};


// Medium Level
int medium1[9][9]  =
{
  {0, 0, 9, 3, 1, 0, 5, 2, 0},
  {5, 3, 1, 7, 0, 6, 0, 0, 0},
  {0, 2, 7, 4, 0, 0, 0, 0, 0},
  {4, 0, 0, 0, 7, 0, 3, 0, 2},
  {0, 0, 0, 8, 0, 0, 0, 0, 6},
  {0, 0, 0, 0, 0, 3, 4, 7, 0},
  {0, 0, 0, 0, 5, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 7, 0, 4, 9},
  {0, 7, 4, 0, 0, 0, 6, 0, 1},
};


int medium2[9][9]  =
{
  {0, 3, 0, 0, 2, 0, 8, 7, 1},
  {0, 7, 0, 0, 0, 8, 3, 0, 0},
  {9, 0, 0, 0, 7, 0, 2, 0, 0},
  {1, 9, 0, 0, 0, 5, 4, 2, 0},
  {8, 0, 0, 0, 0, 0, 0, 0, 0},
  {5, 2, 0, 0, 0, 1, 0, 0, 3},
  {0, 4, 0, 5, 0, 6, 0, 0, 0},
  {6, 0, 0, 4, 0, 0, 5, 9, 0},
  {0, 0, 8, 0, 0, 0, 0, 6, 0},
};


int medium3[9][9]  =
{
  {0, 7, 2, 5, 0, 0, 0, 0, 4},
  {0, 0, 0, 8, 0, 0, 6, 0, 0},
  {8, 3, 0, 0, 0, 0, 2, 5, 0},
  {1, 0, 0, 0, 9, 6, 8, 0, 0},
  {0, 8, 4, 0, 0, 0, 0, 9, 6},
  {0, 0, 6, 0, 1, 8, 7, 4, 0},
  {4, 0, 0, 9, 0, 0, 0, 0, 0},
  {0, 0, 3, 0, 0, 5, 0, 0, 0},
  {0, 2, 0, 3, 7, 0, 0, 0, 0},
};


int medium4[9][9]  =
{
  {0, 0, 0, 0, 0, 0, 0, 0, 8},
  {0, 0, 4, 5, 9, 0, 1, 0, 0},
  {6, 8, 0, 1, 0, 0, 4, 7, 9},
  {0, 0, 0, 0, 0, 7, 0, 0, 3},
  {3, 0, 2, 0, 0, 5, 6, 0, 0},
  {1, 0, 0, 6, 0, 0, 0, 5, 4},
  {0, 2, 0, 8, 7, 1, 0, 0, 0},
  {0, 5, 0, 0, 0, 0, 0, 2, 0},
  {0, 0, 0, 2, 0, 0, 0, 9, 1},
};


// Hard Level
int hard1[9][9]  =
{
  {0, 4, 1, 0, 6, 2, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 9},
  {0, 9, 0, 0, 0, 4, 5, 6, 0},
  {7, 0, 0, 4, 0, 0, 0, 3, 0},
  {0, 2, 0, 7, 5, 0, 0, 9, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 7, 0, 3, 1, 0, 8, 0},
  {0, 8, 3, 0, 0, 0, 2, 0, 0},
  {0, 0, 4, 0, 2, 0, 0, 0, 0},
};


int hard2[9][9]  =
{
  {4, 0, 0, 0, 0, 8, 0, 0, 2},
  {0, 0, 0, 7, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 9, 1, 0, 7, 0},
  {0, 1, 0, 5, 0, 6, 0, 0, 0},
  {6, 0, 0, 0, 0, 4, 0, 9, 0},
  {0, 5, 0, 0, 0, 0, 8, 0, 0},
  {3, 4, 0, 0, 0, 2, 0, 0, 1},
  {8, 0, 0, 0, 3, 0, 0, 0, 6},
  {0, 2, 0, 8, 1, 0, 0, 0, 0},
};


int hard3[9][9]  =
{
  {0, 0, 0, 1, 6, 0, 0, 0, 4},
  {0, 0, 0, 9, 0, 0, 1, 0, 0},
  {0, 0, 0, 0, 7, 3, 0, 0, 2},
  {0, 0, 1, 0, 0, 0, 0, 0, 0},
  {6, 0, 2, 4, 0, 0, 0, 3, 1},
  {5, 0, 0, 0, 0, 6, 0, 0, 0},
  {0, 0, 7, 0, 0, 0, 0, 9, 0},
  {0, 9, 0, 0, 0, 7, 2, 0, 0},
  {2, 8, 0, 0, 0, 0, 0, 5, 3},
};


int hard4[9][9]  =
{
  {0, 0, 4, 6, 0, 0, 5, 1, 0},
  {0, 0, 3, 0, 0, 0, 8, 0, 2},
  {2, 0, 0, 8, 0, 0, 0, 9, 0},
  {0, 0, 1, 0, 2, 8, 0, 4, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0},
  {3, 0, 0, 4, 0, 0, 9, 0, 6},
  {8, 3, 0, 1, 0, 0, 4, 0, 0},
  {0, 0, 0, 0, 9, 0, 2, 0, 0},
  {0, 0, 6, 0, 0, 0, 0, 0, 0},
};


// Expert Level
int expert1[9][9]  =
{
  {0, 2, 7, 1, 0, 0, 0, 0, 8},
  {0, 0, 0, 0, 7, 0, 0, 4, 2},
  {0, 8, 0, 0, 0, 0, 0, 9, 0},
  {1, 0, 0, 0, 0, 0, 6, 0, 0},
  {5, 0, 0, 0, 2, 0, 0, 0, 0},
  {0, 0, 0, 0, 8, 5, 0, 0, 0},
  {0, 7, 1, 4, 0, 0, 0, 0, 0},
  {0, 4, 0, 2, 6, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 3},
};


int expert2[9][9]  =
{
  {0, 0, 5, 0, 0, 4, 0, 0, 0},
  {2, 0, 0, 0, 9, 0, 0, 0, 0},
  {0, 0, 0, 1, 3, 0, 6, 0, 0},
  {1, 0, 0, 0, 0, 0, 4, 3, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 5},
  {0, 4, 0, 8, 0, 0, 0, 6, 2},
  {0, 0, 0, 0, 0, 0, 5, 8, 0},
  {0, 0, 0, 0, 0, 3, 0, 0, 9},
  {0, 8, 6, 9, 0, 0, 0, 0, 4},
};


int expert3[9][9]  =
{
  {0, 9, 1, 0, 0, 0, 0, 7, 0},
  {3, 0, 0, 0, 0, 0, 0, 0, 6},
  {7, 0, 0, 0, 4, 0, 0, 0, 0},
  {0, 0, 0, 1, 0, 0, 0, 0, 5},
  {0, 6, 0, 0, 0, 8, 0, 3, 0},
  {5, 3, 0, 0, 0, 0, 2, 0, 9},
  {0, 0, 0, 0, 0, 7, 5, 0, 0},
  {0, 8, 0, 0, 0, 0, 0, 4, 2},
  {0, 0, 4, 6, 0, 0, 0, 0, 0},
};


int expert4[9][9]  =
{
  {0, 0, 0, 0, 0, 0, 6, 0, 0},
  {0, 0, 0, 0, 0, 7, 0, 0, 1},
  {2, 0, 8, 0, 0, 0, 0, 4, 0},
  {6, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 5, 1, 4, 0, 9, 0, 0, 0},
  {0, 0, 0, 5, 0, 0, 0, 2, 0},
  {0, 0, 4, 0, 0, 0, 0, 5, 0},
  {0, 0, 7, 1, 9, 6, 0, 0, 0},
  {0, 8, 0, 0, 0, 0, 3, 0, 0},
};


// Declaration of game grid.
int gameGrid[9][9]{};


// Declaration of random number.
int rnum{};


// Declaration of choice.
int choice{};


// Generating random grid for game grid.
int randomNumber()
{
  
  srand(time(0));
  return rand() % 4 + 1;

}


// Copying sample grid to game grid based on random number.
void chooseGrid(int choice) 
{
  rnum = randomNumber();
  
  switch(rnum)
  {
    
    case 1:
        if (choice == 1)
          copy(&easy1[0][0], &easy1[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 2)
          copy(&medium1[0][0], &medium1[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 3)
          copy(&hard1[0][0], &hard1[0][0]+9*9, &gameGrid[0][0]);

        else
          copy(&expert1[0][0], &expert1[0][0]+9*9, &gameGrid[0][0]);
        break;

    case 2:
        if (choice == 1)
          copy(&easy2[0][0], &easy2[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 2)
          copy(&medium2[0][0], &medium2[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 3)
          copy(&hard2[0][0], &hard2[0][0]+9*9, &gameGrid[0][0]);

        else
          copy(&expert2[0][0], &expert2[0][0]+9*9, &gameGrid[0][0]);
        break;
        
    case 3:
        if (choice == 1)
          copy(&easy3[0][0], &easy3[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 2)
          copy(&medium3[0][0], &medium3[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 3)
          copy(&hard3[0][0], &hard3[0][0]+9*9, &gameGrid[0][0]);

        else
          copy(&expert3[0][0], &expert3[0][0]+9*9, &gameGrid[0][0]);
        break;
        
    case 4:
        if (choice == 1)
          copy(&easy4[0][0], &easy4[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 2)
          copy(&medium4[0][0], &medium4[0][0]+9*9, &gameGrid[0][0]);

        else if (choice == 3)
          copy(&hard4[0][0], &hard4[0][0]+9*9, &gameGrid[0][0]);

        else
          copy(&expert4[0][0], &expert4[0][0]+9*9, &gameGrid[0][0]);
        break;
  }
}


// Check if the position is valid or not.
bool check_grid(int pos1, int pos2)
{
  if ((pos1 < 0 || pos1 > 8) || (pos2 < 0 || pos2 > 8))
  {
    cout << "Invalid Input" << endl;
    return false;
  }

  switch(rnum)
  {
    
    case 1:
        if (choice == 1)
        {
          if (gameGrid[pos1][pos2] == easy1[pos1][pos2] && easy1[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 2)
        {
          if (gameGrid[pos1][pos2] == medium1[pos1][pos2] && medium1[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 3)
        {
          if (gameGrid[pos1][pos2] == hard1[pos1][pos2] && hard1[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else
        {
          if (gameGrid[pos1][pos2] == expert1[pos1][pos2] && expert1[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }
        break;

    case 2:
        if (choice == 1)
        {
          if (gameGrid[pos1][pos2] == easy2[pos1][pos2] && easy2[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 2)
        {
          if (gameGrid[pos1][pos2] == medium2[pos1][pos2] && medium2[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 3)
        {
          if (gameGrid[pos1][pos2] == hard2[pos1][pos2] && hard2[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else
        {
          if (gameGrid[pos1][pos2] == expert2[pos1][pos2] && expert2[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }
        break;
        
    case 3:
        if (choice == 1)
        {
          if (gameGrid[pos1][pos2] == easy3[pos1][pos2] && easy3[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 2)
        {
          if (gameGrid[pos1][pos2] == medium3[pos1][pos2] && medium3[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 3)
        {
          if (gameGrid[pos1][pos2] == hard3[pos1][pos2] && hard3[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else
        {
          if (gameGrid[pos1][pos2] == expert3[pos1][pos2] && expert3[pos1][pos2] != 0)
          
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }
        break;
        
    case 4:
        if (choice == 1)
        {
          if (gameGrid[pos1][pos2] == easy4[pos1][pos2] && easy4[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 2)
        {
          if (gameGrid[pos1][pos2] == medium4[pos1][pos2] && medium4[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else if (choice == 3)
        {
          if (gameGrid[pos1][pos2] == hard4[pos1][pos2] && hard4[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }

        else
        {
          if (gameGrid[pos1][pos2] == expert4[pos1][pos2] && expert4[pos1][pos2] != 0)
          {
            cout << "Invalid Input can't change default number" << endl;
            return false;
          }
        }
        break;
  }
  return true;
}


// Check if the number is already present in the column, row or grid.
bool check_number(int gameGrid[9][9], int pos1, int pos2, int number)
{
  int check{};

  for (int i = 0; i <= 8; i++)
  {
    if (gameGrid[pos1][i] == number)
    {
      cout << "Number already in the row" << endl;
      check = 1;
    }

    if (gameGrid[i][pos2] == number)
    {
      cout << "Number already in the column" << endl;
      check = 1;
    }
  }

  int a{}, b{};
  
  if (pos1 >= 0 && pos1 <= 2)
    a = 0;
  else if (pos1 >= 3 && pos1 <= 5)
    a = 3;
  else
    a = 6;

  if (pos2 >= 0 && pos2 <= 2)
    b = 0;
  else if (pos2 >= 3 && pos2 <= 5)
    b = 3;
  else
    b = 6;
  
  for (int i = a; i < a+3; i++)
  {
    for (int j = b; j < b+3; j++)
    {
      if (gameGrid[i][j] == number)
      {
      cout << "Number already in the grid" << endl;
      check = 1;
      }
    }
  }

  if (check == 1)
    return false;

  else
    return true;
}


// Modifying the game grid.
void modify_grid(int gameGrid[9][9])
{
  cout << endl;
  cout << "  ";
    for (int x = 0; x < 9; x++)
  {
    if (x == 3 || x == 6) 
    {
      cout << " ";
    }
    cout << "   " << x;
  }
  cout << endl;

  for (int k = 0; k < 9; k++) 
  {
    if (k == 0) 
    {
      cout << "   ";
    }
    cout << " ===";
    if (k == 2 || k == 5) 
    {
      cout << " ";
    }
  }
  cout << endl;

  int y = 0; 
  for (int i = 0; i < 9; i++) 
  {
    cout << y << " ";
    y++;
    cout << "|| ";
  for (int j = 0; j < 9; j++) 
  {
    cout << gameGrid[i][j];
    if (j == 2 || j == 5 || j == 8) 
    {
      cout << " || ";
    }
    else 
    {
      cout << " | ";
    }
  }
  cout << endl;

  if (i == 2 || i == 5 || i ==8) 
  {
    for (int k = 0; k < 9; k++) 
    {
      if (k == 0) 
      {
        cout << "   ";
      }
      cout << " ===";
      if (k == 2 || k == 5) 
      {
        cout << " ";
      }
    }
  }

  else 
  {
    for (int k = 0; k < 9; k++) 
    {
      if (k == 0) 
      {
        cout << "   ";
      }
      cout << " ---";
      if (k == 2 || k == 5) 
      {
        cout << " ";
      }
    }
  }
  cout << endl;

  }
}


// Get the user input
void user_input(int gameGrid[9][9])
{ 
  int pos1{}, pos2{}, number{};
  cout << "\nEnter the position of your input: ";
  cin >> pos1 >> pos2;

  bool check = check_grid(pos1, pos2);

  if (check == true)
  {
    jump:
    cout << "\nEnter the number you want to input: ";
    cin  >> number;

    if (number > 0 && number < 10)
    { 
      bool fault = check_number(gameGrid, pos1, pos2, number);
      
      if (fault == true)
      {
      gameGrid[pos1][pos2] = number;
      
      modify_grid(gameGrid);
      }
    }
    else
    {
      cout << "Invalid input, write a number between 1 and 9" << endl;
      goto jump;
    }    
  }
}


// Updating the game grid.
void update_grid(int gameGrid[9][9])
{
  jump:
  for (int i = 0; i <= 8; i++) 
  {
    for (int j = 0; j <= 8; j++)
    {
      if (gameGrid[i][j] == 0)
      {
        user_input(gameGrid);
        goto jump;
      }
    }
  }
  cout << "\nCongratulations! You completed the game. " << endl;
}


// SUDOKU GAME
void game(int gameGrid[9][9]) 
{
  cout << "  ";
  for (int x = 0; x < 9; x++)
  {
    if (x == 3 || x == 6) 
    {
      cout << " ";
    }
    cout << "   " << x;
  }
  cout << endl;

  for (int k = 0; k < 9; k++) 
  {
    if (k == 0) 
    {
      cout << "   ";
    }
    cout << " ===";
    if (k == 2 || k == 5) 
    {
      cout << " ";
    }
  }
  
  cout << endl;

  int y = 0; 
  for (int i = 0; i < 9; i++) 
  {
    cout << y << " ";
    y++;
    cout << "|| ";
    for (int j = 0; j < 9; j++) 
    {
      cout << gameGrid[i][j];
      if (j == 2 || j == 5 || j == 8) 
      {
        cout << " || ";
      }
      else 
      {
        cout << " | ";
      }
    }
    
  cout << endl;

  if (i == 2 || i == 5 || i ==8) 
  {
    for (int k = 0; k < 9; k++) 
    {
      if (k == 0) 
      {
        cout << "   ";
      }
      cout << " ===";
      if (k == 2 || k == 5) 
      {
        cout << " ";
      }
    }
  }

  else 
  {
    for (int k = 0; k < 9; k++) 
    {
      if (k == 0) 
      {
        cout << "   ";
      }
      cout << " ---";
      if (k == 2 || k == 5) 
      {
        cout << " ";
      }
    }
  }
  cout << endl;

  }
  
  update_grid(gameGrid);
}