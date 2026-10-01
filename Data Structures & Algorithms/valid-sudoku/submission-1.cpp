class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for( int row=0; row<9; row++){
            unordered_set<char> seen;
            for( int i=0; i<9; i++){
                if(board[row][i] == '.') continue;
                if(seen.count(board[row][i])) return false;
                seen.insert(board[row][i]);
            }
        }

        for( int column =0; column<9; column++){
            unordered_set<char> seen;
            for( int i=0; i<9 ; i++){
                if(board[i][column] == '.') continue;
                if( seen.count(board[i][column])) return false;
                seen.insert(board[i][column]);
                
                
            }
        }
        //for every square compute the row and column number 

        for( int square=0; square<9; square++){
            unordered_set<char> seen;
            for( int i=0; i<3; i++){
                for( int j=0; j<3; j++){
                    //sq/3 remains same for 0,1,2 +0,1,2
                    //therefore the i for the first 3 squares will be 0,1,2
                    int row = (square/3)*3+i;
                    //square %3 changes +1 for 0,1, 2 
                    //it will be 0+0,1,2, and then 1*3+(0,1,2)=3,4,5
                    //and then for 2*3+(0,1,2) =6,7,8 ( columns)
                    int col = (square%3)*3+j;
                    if( board[row][col] == '.') continue;
                    if( seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);

                    
                }
            }
        }
        return true;
    }
};
