class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
    vector<int>matrix;
    int row =  v.size();
    int col = v[0].size();
    int total_ele= row*col;
    int starting_row = 0;
    int ending_row = row-1;
    int starting_col = 0;
    int ending_col = col-1;
    int count=0;
    while(count<total_ele){
        for (int i = starting_col ; i <=ending_col && count<total_ele ; i++)
        {
            matrix.push_back(v[starting_row][i]);
            count++;
        }
         starting_row++;
        for (int i = starting_row ; i <= ending_row && count<total_ele ; i++)
        {
            matrix.push_back(v[i][ending_col]);
            count++;
        }
        ending_col--;
        for (int i = ending_col; i >= starting_col && count<total_ele ; i--)
        {
            matrix.push_back(v[ending_row][i]);
            count++;
        }
        ending_row--;
        for (int i = ending_row; i >= starting_row && count<total_ele ; i--)
        {
            matrix.push_back(v[i][starting_col]);
            count++;
        }
        starting_col++;    
    }
    return matrix;
     
}
    
};
