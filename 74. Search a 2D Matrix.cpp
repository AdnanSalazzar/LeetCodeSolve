class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size() ;
        

        int row = 0 ,  col = cols - 1;

        while(row != rows && col > -1 )
        {
            int initial = matrix[row][col] ;
            if(initial == target)
                return true; 

            if(initial < target)
                row++; 

            else 
                col-- ; 
            

        }

        return false; 



    }
};
