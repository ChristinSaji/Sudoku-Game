#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sudoku.h"

using namespace std;

int main() {
  
  cout << "\n\t\t\t  SUDOKU GAME \n" << endl;
  
  char exit{};

  jump:

  cout << "Select Difficulty" << endl;
  cout << "1. Easy" << endl;
  cout << "2. Medium" << endl;
  cout << "3. Hard" << endl;
  cout << "4. Expert" << endl;
  cout << "\nEnter your choice: ";

  cin >> choice;
  cout << endl;

  if (choice == 1 || choice == 2 || choice == 3 || choice == 4) 
  { 
    chooseGrid(choice);
    game(gameGrid);
  }

  else
    cout << "Wrong Input" << endl;

  cout << "\nDo you want play again (Y/N): ";
  cin >> exit;
  cout << endl;
  
  if ((exit == 'Y') || (exit == 'y'))
    goto jump;

  return 0;
  
}