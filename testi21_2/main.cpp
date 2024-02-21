#include <iostream>

using namespace std;

int main()
{
    //sovellus tulostaa satunnaisluvun
    //väliltä 1-10
    srand(time(0)); //asetetaan siemenluku kellonajan avulla
    int myrandom=rand()%10+1; //jakojäännös jaettaessa 10:lla +1
    cout << "satunnaisluku= " <<myrandom << endl;
    return 0;
}
