

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
    SaveFile << "maria lega le palle al movimento delle 5 stelle m5s m5s M5S cassano";
    Test2<<"Juventus";
    Test2.close();
    SaveFile.close();
    Documento D1("ciao.txt");
    Documento D2("Riciao.txt");
    KNN knn;
    std::cout<<"TIPO:" <<knn.Classify(D2,"cos")<<std::endl;

    //Ciao
    return 0;
}

