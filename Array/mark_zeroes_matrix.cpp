
//brute

class Solution {
public:

    void markrow(vector<vector<int>>& matrix,int j,int row){

        for(int i=0;i<row;i++){

            if(matrix[i][j] !=0){
                matrix[i][j]=-1;
            }
        }
    }
    void markCol(vector<vector<int>>& matrix,int i,int column){

        for(int j=0;j<column;j++){

            if(matrix[i][j] !=0){
                matrix[i][j]=-1;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int column=matrix[0].size();

        for(int i=0;i<row;i++){

            for(int j=0;j<column;j++){

                if(matrix[i][j]==0){
                    markrow(matrix,j,row);
                    markCol(matrix,i,column);
                }
            }
        };
        for(int i=0;i<row;i++){

            for(int j=0;j<column;j++){

                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};

//optimal

class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int column=matrix[0].size();

        int col0=1;

        for(int i=0;i<row;i++){

            for(int j=0;j<column;j++){

                if(matrix[i][j]==0){
                    
                    matrix[i][0]=0;

                    if(j==0){
                        col0=0;
                    }
                    else{
                        matrix[0][j]=0;
                    }
                }
            }
        };
        for(int i=1;i<row;i++){

            for(int j=1;j<column;j++){

                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }

        if(matrix[0][0]==0){

            for(int j=0;j<column;j++){
                matrix[0][j]=0;
            }
        }
        if(col0==0){
            for(int i=0;i<row;i++){
                matrix[i][0]=0;
            }
        }
        
    }
};