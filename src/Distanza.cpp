#include "Distanza.h"

Distanza::Distanza()
{
}

Distanza::~Distanza()
{
}

//Trova le parole (key) in comune tra le due mappe e ritorna un vettore di stringhe contente le suddette parole
std::vector<std::string> Distanza::GetCommonKeys(std::map<std::string,int> m1,std::map<std::string,int> m2) const
{
    std::map<std::string,int>::iterator iter1=m1.begin();
    std::map<std::string,int>::iterator iter2=m2.begin();
    std::vector<std::string> couples;
    while(iter1!=m1.end())
    {
        iter2=m2.begin();
        while(iter2!=m2.end())
        {
            if(iter1->first.compare(iter2->first)==0)
            {
                couples.push_back(iter1->first);
                break;
            }
            else
                iter2++;
        }
        iter1++;
    }
    return couples;
}


