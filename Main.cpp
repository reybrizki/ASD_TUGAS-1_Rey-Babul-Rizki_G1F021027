#include "clock.h"
using namespace std;

 int main()
 {
    clock c1 = MakeClock(3,20,10);
    clock c2 = MakeClock(7,10,40);
    clock sisa = MakeClock(2,50,40);

    PrintClock(c1);
    PrintClock(c2);

    sisa = AddClock(c1, c2);
    PrintClock(sisa);

    return 0;
 }
