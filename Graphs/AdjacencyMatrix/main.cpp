#include <iostream>
using namespace std;

int main()
{
	// n is the number of vertices
	// m is the number of edges
	int n, m;
	cin >> n >> m ;
	int adjMat[n + 1][n + 1];
	for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
            adjMat[i][j]=0;
    }
	for(int i = 1; i <m+1; i++){
		int u , v ;
		cin >> u >> v ;
		adjMat[u][v] = 1 ;
		adjMat[v][u] = 1 ;
	}
	cout<<"a  b  c"<<endl;
	for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
            cout<<adjMat[i][j]<<"  ";
        cout<<endl;
    }
	return 0;
}
