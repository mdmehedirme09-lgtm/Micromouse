#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&image,int x,int y,int oldC,int newC){
    if(x<0 || x>=image.size()||
       y<0 || y>=image[0].size()||
       image[x][y]!=oldC){
        return;
       }
       image[x][y]=newC;
       dfs(image,x+1,y,oldC,newC);
       dfs(image,x-1,y,oldC,newC);
       dfs(image,x,y+1,oldC,newC);
       dfs(image,x,y-1,oldC,newC);

      
}

vector<vector<int>> floodfill(vector<vector<int>>&image,int sr,int sc,int newColor){
    if(image[sr][sc]==newColor){
        return image;
    }
    int oldColor=image[sr][sc];
    dfs(image,sr,sc,oldColor,newColor);
    return image;
}
int main(){
    vector<vector<int>>image={
        {1,1,1},
        {1,1,0},
        {1,0,1}
    };
    floodfill(image,1,1,3);
    for(int i=0;i<image.size();i++){
        for(int j=0;j<image[0].size();j++){
            cout<<image[i][j]<<" ";
        
        }
        cout<<endl;
    }
}
