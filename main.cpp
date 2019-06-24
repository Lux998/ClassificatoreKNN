

#include <cstdlib>
#include "Documento.h"
using namespace std;

int main(int argc, char** argv)
{
    ofstream SaveFile("ciao.txt");
    SaveFile << "Test di scrittura su file CIA CIA CIA";
    SaveFile.close();
    Documento d("ciao.txt");

    d.stampa();
    //Ciao
    return 0;
}

