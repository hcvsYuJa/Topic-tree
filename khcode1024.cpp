/*
飆程式網
http://khcode.m-school.tw/index.php
[語言] 幾次方呢 (ID: 1024)
http://khcode.m-school.tw/show.php?1024
該飆程式網此程式碼解題狀況
序號	  題目	    結果	           時間	  空間	程式碼	(編譯器)	            上傳時間
96485	1024	測試通過 (100/100)	65 ms	276 KB	1270 B	(C++_GCC4w64)	2020-04-16 20:54:01

*/
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int N, x=0, y=0;
    int Temporary_power, Temporary_Base;
    int Max;
    cin >> N;
        Max = sqrt(N);
        for (int i = 2; i <= Max; i++)
        {
            //cout << "N=" << N << endl;
            if (N % i == 0)
            {
                // cout << "i=" << i << endl;
                Temporary_Base = N;
                Temporary_power = 0;
                while (Temporary_Base > 1)
                {
                    if(Temporary_Base % i != 0 )
                        break;
                    Temporary_Base = Temporary_Base / i;
                    Temporary_power++;
                    //cout << "Temporary_Base=" << Temporary_Base << endl;

                }
                if(Temporary_Base > 1)
                    continue;
                //  cout << "Temporary_power=" << Temporary_power << endl;
                if (Temporary_power > y)
                {
                    x = i;
                    y = Temporary_power;
                    break;
                }
            }
        }
        if (y == 0)
        {
            x = N;
            y = 1;
        }
        cout << x << " " << y << endl;
}


