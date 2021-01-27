    void subfill(vector<vector<int>>& image, int x, int y, int newColor,int oldColor) 
    {
        int M = image.size();
        int N = image[0].size();
        if(x< 0||x>=M || y <0 || y >= N)
            return ;

        if (image[x][y] != oldColor)
            return ;
        if (image[x][y] == newColor)                    
            return ;

        image[x][y]=newColor;

        subfill(image,x+1,y,newColor,oldColor) ;        //east
        subfill(image,x,y+1,newColor,oldColor) ;        //north
        subfill(image,x-1,y,newColor,oldColor) ;        //west
        subfill(image,x,y-1,newColor,oldColor) ;        //south


        return ;
    }

vector<vector<int>> floodFill(vector<vector<int>>& image, int x, int y, int newColor) 
{
    vector<vector<int>> pic = image;
    int oldColor = image[x][y];
    subfill(pic,x,y,newColor,oldColor) ;

    return pic;
    
}