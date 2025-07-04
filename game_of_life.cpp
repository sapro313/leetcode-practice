class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>>board1=board;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int left = -1, right = -1, up = -1, down = -1,dig1=-1,dig2=-1,dig3=-1,dig4=-1;

                if (j - 1 >= 0) {
                    left = board1[i][j - 1];
                }
                if (i - 1 >= 0) {
                    up = board1[i - 1][j];
                }
                if (j + 1 < n) {  
                    right = board1[i][j + 1];
                }
                if (i + 1 < m) {  
                    down = board1[i + 1][j];
                }
                if(i-1>=0&&j-1>=0){
                    dig1=board1[i-1][j-1];
                }
                if(i-1>=0&&j+1<n){
                    dig2=board1[i-1][j+1];
                }
                if(i+1<m&&j-1>=0){
                    dig3=board1[i+1][j-1];
                }
                if(i+1<m&&j+1<n){
                    dig4=board1[i+1][j+1];
                }


                if (board1[i][j] == 1) {
                    int count = 0;
                    if (left == 1) count++;   
                    if (right == 1) count++;
                    if (up == 1) count++;
                    if (down == 1) count++;
                    if(dig1==1)count++;
                    if(dig2==1)count++;
                    if(dig3==1)count++;
                    if(dig4==1)count++;

                    if (count < 2 || count > 3) {
                        board[i][j] = 0;  
                    }
                } else {
                    int count = 0;
                    if (left == 1) count++;   
                    if (right == 1) count++;
                    if (up == 1) count++;
                    if (down == 1) count++;
                    if(dig1==1)count++;
                    if(dig2==1)count++;
                    if(dig3==1)count++;
                    if(dig4==1)count++;

                    if (count == 3) {
                        board[i][j] = 1;
                    }
                }
            }
        }
    }
};
