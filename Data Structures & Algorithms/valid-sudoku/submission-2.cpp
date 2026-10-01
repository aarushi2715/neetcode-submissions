class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> row(9, 0);
        vector<int> col(9,0);
        vector<int> sq(9,0);

        for( int r=0; r<9; r++){
            for( int c=0; c<9; c++){
                if (board[r][c] == '.') continue;

                int val = board[r][c]-'1';
                //converting 1-9 from 0-8

                //checking if the row [r] value and the 1<<val is the same
                if((row[r] &(1<<val) || col[c] & (1<<val) ||
                 (sq[(r/3)*3+(c/3)] &(1<<val)))) return false;
                
                //adding the value in the array
                 row[r] |= (1<<val);
                 col[c] |=(1<<val);
                 sq[(r/3)*3+(c/3)] |=(1<<val);
            }
          
        }
          return true;
    }
};
