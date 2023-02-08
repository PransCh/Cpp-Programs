#include<iostream>
using namespace std;
int main()
{

return 0;
}int maxRectangle(int mat[r][c]){
	int res=largesthist(mat[0],c);//we are passing only first row to find the largest histogram function from prev question

	for(int i=1;i<r;i++){//begin with second row
		for(int j=0;j<;j++){//we consider the curr row as a base for 
			if(mat[i][j]==1) mat[i][j] +=mat[i-1][j];//we add the above value of curr row 
		}
		res=max(res,largesthist(mat[i],c));
	}
	return res;
}
//mydemocommti in git hub for git diff
