#include <iostream>
using namespace std;
int main()
{

    srand(time(0));
    bool ruta[5][5], vinst = true;
    int ant_vin = 0, ant_för = 0;
    for (int g = 0;g < 100000;++g) {
        int sjuton = 17;
        for (int k = 0;k < 5;++k)
            for (int h = 0;h < 5;++h)
                ruta[k][h] = true;

        while (sjuton)
        {
            int temp1 = rand() % 5, temp2 = rand() % 5;
            if (ruta[temp1][temp2])
            {
                ruta[temp1][temp2] = false;
                sjuton--;

            }

        }
        for (int k = 0;k < 5;++k) {
            vinst = true;
            for (int h = 0;h < 5;++h)
                if (ruta[k][h])
                    vinst = false;
        }

        if (vinst) {
            ant_vin++;
        }
        else
        {
            ant_för++;
        }

    }
    cout << ant_vin << endl << ant_för << endl << double(ant_vin) / (ant_vin + ant_för);
    return 0;
}