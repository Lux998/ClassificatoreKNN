

#include <cstdlib>
#include "Documento.h"
#include "KNN.h"
#include "DistanzaCos.h"
using namespace std;

int main(int argc, char** argv)
{
    Distanza* d;
    std::vector<std::string> ciao;
    ofstream SaveFile("ciao.txt");
    ofstream Test2("Riciao.txt");
    SaveFile << "a afa fdfiapd faf aòàfsdoaife qep iosdlmcm ve èàsc ";
    Test2<<" a palabutei paa ";
    Test2.close();
    SaveFile.close();
    d=new DistanzaCos();
    Documento D1("ciao.txt");
    Documento D2("Riciao.txt");
    D1.stampa();
    D2.stampa();
    KNN knn;
    std::cout << d->getDistanza(D1,D2);

    //Ciao
    return 0;
}

