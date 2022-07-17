class Solution {
public:
    void find(vector<vector<int>>& image, int sr, int sc, int color,vector<vector<bool>> &vis,int from)
    {
        if(sr<0||sr<0||sr>=image.size()||sc>=image[0].size()||image[sr][sc]!=from||vis[sr][sc]==true)
            return;
        
        vis[sr][sc]=true;
        if(image[sr][sc]==from)
            image[sr][sc]=color;
        find(image,sr-1,sc,color,vis,from);
        find(image,sr,sc-1,color,vis,from);
        find(image,sr+1,sc,color,vis,from);
        find(image,sr,sc+1,color,vis,from);
        vis[sr][sc]=false;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> vis(image.size(),vector<bool>(image[0].size(),false));
        int from=image[sr][sc];
        find(image,sr,sc,color,vis,from);
        return image;
    }
};