#include <iostream>
#include"evenement.h"
#include"timing.h"
using namespace std;
using namespace TIME;
int main()
{
    Evtlj e1(Date(4,10,1957),"Oumaima");
    e1.afficher();
    Evtlj e2(Date(4,10,99),"salam");
    e2.afficher();

}
