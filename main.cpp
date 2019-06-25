

#include <cstdlib>
#include "Documento.h"
#include "KNN.h"
using namespace std;

int main(int argc, char** argv)
{
    std::vector<std::string> ciao;
    ofstream SaveFile("ciao.txt");
    ofstream Test2("Riciao.txt");
    SaveFile << "Ciao ciao ciao coez ";
    Test2<<"Ciao ciao ccoez";
    Test2.close();
    SaveFile.close();

    Documento D1("ciao.txt");
    Documento D2("Riciao.txt");
    D1.stampa();
    D2.stampa();
    KNN knn;
    std::cout << knn.Distanza(0,D1,D2);

    //Ciao
    return 0;
}

