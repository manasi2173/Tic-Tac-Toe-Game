# Tic-Tac-Toe-Game
Tic-Tac-Toe Game implemented in C++ using concept of 2D arrays.\
Tic-Tac-Toe Game uses 3x3 matrix where, Player 1 always starts the game.\
Winning condition:\
  All X's by Player 1 at any row/column/diagonal.\
  All O's by Player 2 at any row/column/diagonal.\
  If count of X's equals to count of O's, then Player 1 wins.\
  If count of X's is one more than count of O's, then Player 2 wins.\
  If no condition is statisfied, then it's a draw.\
This is comprised of two approaches:
1. Brute-Force Approach:\
   Uses concept of numbering places from the matrix and uses those numbers as input from players to mark 'X' or 'O' depending on their number i.e. player number.\
   Uses simple 2D Array, if-else loops and do-while loops.\
   Time Complexity: O(1)      //Board displayed after each move\
   Space Complexity: O(1)     //Fixed amount of memory used to store the board\
   Handles invalid move handling, winning condition check, draw condition.\
   Lacks in handling input that might go out of range (1,9).
2. Optimized Approach:\
   Uses the same concept as Brute-Force Approach\
   Adds a 2D matrix for all possible winning patterns, for loops and do-while loop.\
   Time Complexity: O(1)        //Winning patterns and Board display fixed\
   Space Complexity: O(1)      //Fixed amount of memory used to store the board\
   Handles input validation between range (1,9) to prevent invalid moves.\
   Reduces redundancy in marking cells.
