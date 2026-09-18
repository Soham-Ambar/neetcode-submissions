class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // Check rows
        for (int r = 0; r < 9; r++) {
            vector<int> hash(9, 0);
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.')
                    continue;
                int num = board[r][c] - '1';
                if (hash[num] != 0)
                    return false;
                hash[num] = 1;
            }
        }

        // Check columns
        for (int c = 0; c < 9; c++) {
            vector<int> hash(9, 0);
            for (int r = 0; r < 9; r++) {
                if (board[r][c] == '.')
                    continue;
                int num = board[r][c] - '1';
                if (hash[num] != 0)
                    return false;
                hash[num] = 1;
            }
        }

        // Check 3x3 boxes
        for (int br = 0; br < 9; br += 3) {
            for (int bc = 0; bc < 9; bc += 3) {
                vector<int> hash(9, 0);

                for (int r = br; r < br + 3; r++) {
                    for (int c = bc; c < bc + 3; c++) {
                        if (board[r][c] == '.')
                            continue;
                        int num = board[r][c] - '1';

                        if (hash[num] != 0)
                            return false;
                        hash[num] = 1;
                    }
                }
                
            }
        }

        return true;
    }
};