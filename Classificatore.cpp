/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Classificatore.cpp
 * Author: lucap
 *
 * Created on 19 giugno 2019, 12.26
 */

#include "Classificatore.h"
#include "Documento.h"
//std::string Classificatore::Classify(Documento d)=0;

float Classificatore::Distanza(int tipo, Documento d1, Documento d2) {

        switch(tipo)
    {
        case 0://cos
        /*
         Il contenuto dei due vettori è la frequenza dei termini, ossia il numero di
         volte in cui una certa parola ricorre all'interno del testo.
         Il k-simo elemento di ogni vettore conterrà dunque il numero di volte
         in cui la parola numerata con k ricorre nel testo,
         oppure 0 se non ricorre mai.
         A,B: vettori
         Formula:
                 similarity = cos(θ) = AB/||A||||B||
         k=1, n: dimensione vettore, sommatoria da k a n

         Σ A(k)B(k) / (ΣA(k)^2)^1/2 (ΣB(k)^2)^1/2

         */
        std::map<std::string,int>::const_iterator iter;

        for(iter=d1.getBag().begin(); iter!=d1.getBag().end(); ++iter)
        {

        }
  }
}


