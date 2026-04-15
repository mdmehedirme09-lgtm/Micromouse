def dfs(img,x,y,o,n):
    if x<0 or x>=len(img) or y<0 or y>=len(img[0]) or img[x][y]!=o :
       return

    img[x][y]=n
    dfs(img,x+1,y,o,n)
    dfs(img,x-1,y,o,n)
    dfs(img,x,y+1,o,n)
    dfs(img,x,y-1,o,n)
    return img
    
def floodfill(img,sr,sc,newC):
    if img[sr][sc]==newC :
        return img
    oldC=img[sr][sc]
    dfs(img,sr,sc,oldC,newC)
    return img
    


img=[[1,1,1,0],[1,0,0,1],[1,1,1,1],[0,1,0,1]]
floodfill(img,0,0,3)

print(img)
