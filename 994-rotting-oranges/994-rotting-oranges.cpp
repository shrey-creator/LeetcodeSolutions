class Solution {
public:
    int markRotten(vector<vector<int>>& grid,int i,int j,queue<pair<int,int>>& q)
    {
        int count=0;
        int rows=grid.size();
        int col=grid[0].size();
        if(j+1<col && grid[i][j+1]==1)
        {
            grid[i][j+1]=2;
            count++;
            q.push({i,j+1});
        }
        if(j-1>=0 && grid[i][j-1]==1)
        {
            grid[i][j-1]=2;
            q.push({i,j-1});
            count++;
        }
        if(i+1<rows && grid[i+1][j]==1)
        {
            grid[i+1][j]=2;
            q.push({i+1,j});
            count++;
        }
        if(i-1>=0 && grid[i-1][j]==1)
        {
            grid[i-1][j]=2;
            q.push({i-1,j});
            count++;
        }
        return count;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int temp=0;
       for(int i=0;i<grid.size();i++)
       {
           for(int j=0;j<grid[0].size();j++)
           {
               if(grid[i][j]==2)
               {
                   q.push({i,j});
                   temp++;
               }
           }
       }
        int count=0;
        while(!q.empty())
        {
            count++;
            int noOfRottenOranges=0;
            while(temp--)
            {
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            noOfRottenOranges+=markRotten(grid,i,j,q);
            
            }
            temp=noOfRottenOranges;
            
        }
        if(count>=1)
         count--;
          for(int i=0;i<grid.size();i++)
       {
           for(int j=0;j<grid[0].size();j++)
           {
               if(grid[i][j]==1)
               {
                   count=-1;
                   break;
               }
           }
       }
        return count;
        
    }
};