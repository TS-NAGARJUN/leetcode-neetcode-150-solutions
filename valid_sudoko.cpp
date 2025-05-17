class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool isTrue = true;
        int row1 = board.size();
        int col1 = board[0].size();
        vector<set<char>>box(9),row(9),col(9);
        for(int i=0;i<row1;i++)
        {
            for(int j=0;j<col1;j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                if(row[i].find(board[i][j])!=row[i].end())
                {
                    return false;
                }
                row[i].insert(board[i][j]);
                if(col[j].find(board[i][j])!=col[j].end())
                {
                    return false;
                }
                col[j].insert(board[i][j]);
                int index = (i/3)*3 + (j/3);
                if(box[index].find(board[i][j]) != box[index].end())
                {
                    return false;
                }
                box[index].insert(board[i][j]);
            }
        }
        return true;
    }
};
