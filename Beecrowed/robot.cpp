#include <bits/stdc++.h>
using namespace std;

bool isWithinArea(int Ax, int Ay, int Bx, int By, int Cx, int Cy, int Dx, int Dy, int RX, int RY)
{
    if (Ax <= RX && Ay < RY){
        
    }
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, RX, RY;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> RX >> RY;

        bool result = isWithinArea(Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, RX, RY);
        cout << result << endl;
    }
}