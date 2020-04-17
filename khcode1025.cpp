/*
飆程式網
http://khcode.m-school.tw/index.php
[語言] 矩陣乘法 (ID: 1025)
http://khcode.m-school.tw/show.php?1025
*/
#include <iostream>
using namespace std;
short A[100][100]={{7,4},{3,5}},B[100][100]={{2,1},{4,3}},N=2,i,j;
int main()
{
    
//    cin >> N;
    //--------------------A矩陣輸入 
    /*for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
    		cin >> A[i][j];
    //--------------------B矩陣輸入 
    for(i=0;i<N;i++)
    	for(j=0;j<N;j++)
    		cin >> B[i][j];
    */
    //--------------------開始計算矩陣
    short val=0,Key_A=0,Key_B=0;
    for(Key_A=0;Key_A<N;Key_A++)
    {
    	for(Key_B=0;Key_B<N;Key_B++)
    	{
    		val=0;
    		for(i=0;i<N;i++)
		{
			val+=A[Key_A][i]*B[i][Key_B];
		}
		cout << val << " ";
	}
	cout << endl;
    }
    return 0;
}
