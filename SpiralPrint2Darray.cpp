#include <iostream>
#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix)
    {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        // index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;
        int total = matrix.size() * matrix[0].size();
        while (ans.size() < total)
        {
            for (int i = startingCol; i <= endingCol && ans.size() < total; i++)
            {
                ans.push_back(matrix[startingRow][i]);
            }
            startingRow++;

            for (int i = startingRow; ans.size() < total && i <= endingRow; i++)
            {
                ans.push_back(matrix[i][endingCol]);
            }
            endingCol--;

            for (int i = endingCol; ans.size() < total && i >= startingCol; i--)
            {
                ans.push_back(matrix[endingRow][i]);
            }
            endingRow--;

            for (int i = endingRow; ans.size() < total && i >= startingRow; i--)
            {
                ans.push_back(matrix[i][startingCol]);
            }
            startingCol++;
        }
        return ans;
    }
};