#ifndef GRAPHE_H_INCLUDED
#define GRAPHE_H_INCLUDED
#include <string>
#include <unordered_map>
#include "sommet.h"
#include "arete.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

#define arete std::pair<int,int>


class Graphe
{
    private:
        std::vector <Arete*> edges ;    /// vecteur d'aretes
        std::vector<Sommet*> sommets ;  /// vecteur de sommets
        std::vector<Arete*> ar_kruskal;
        int taille;

    public:

        Graphe(std::string fichier, std::string fichier_poids);
        std::vector<bool> ConvertisseurBin(int n);
        void bruteForce() const;
        void afficher(Svgfile& svgout) const;
        void afficherKruskal(Svgfile& svgout)const;
        void kruskal(Graphe g);
        void triCout1();
        void triCout2();
        void bruteForceFacile();
        Graphe();
        int tailleA() const ;

};



/*
class graphe
{
    public:
        ///constructeur qui charge le graphe en m�moire
        //format du fichier ordre/liste des sommets/taille/liste des ar�tes
        graphe(std::string);
        ~graphe();
        void afficher() const;

    private:
        /// Le r�seau est constitu� d'une collection de sommets
        std::unordered_map<std::string,Sommet*> m_sommets;//stock�e dans une map (cl�=id du sommet, valeur= pointeur sur le sommet)
        /// Vecteur Aretes
        std::vector <Arete*> edges ;

};
*/

#endif // GRAPHE_H_INCLUDED
