class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int rows=mat.size();
        int cols=mat[0].size();
        
        bool firstrowele=false;
        bool firstcolele=false; 
        
        //check first row ele is zero or not
        for(int i=0;i<cols;i++){
            if(mat[0][i]==0)  {
                firstrowele=true;
                break;
            }
        }

        //check first col ele is zero or not
        for(int i=0;i<rows;i++){
            if(mat[i][0]==0)  {
                firstcolele=true;
                break;
            }
        }
        // check every element if that ele is 0 then make that element's corresponding first row and col's corresponding ele 0 
        for(int i=1;i<rows;i++){   
        for(int j=1;j<cols;j++){
            if(mat[i][j]==0){
                mat[i][0]=0;
                mat[0][j]=0;
            }
        }
        }
        // check element from first row and col if that is zero then make that row and col zero
        for(int i=1;i<rows;i++){   
        for(int j=1;j<cols;j++){
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j]=0;
            }
        }
        }
        if(firstrowele){
        for(int i=0;i<cols;i++){   
            mat[0][i]=0;
        }
        }
        
        if(firstcolele){
            
        for(int i=0;i<rows;i++){   
            mat[i][0]=0;
        }
        }
   }
};