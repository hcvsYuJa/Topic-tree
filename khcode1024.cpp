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

                    Temporary_Base = Temporary_Base / i;
                    Temporary_power++;
                    //cout << "Temporary_Base=" << Temporary_Base << endl;

                }
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
