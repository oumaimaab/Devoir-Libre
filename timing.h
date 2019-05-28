#ifndef TIMING_H_INCLUDED
#define TIMING_H_INCLUDED
namespace TIME{
    //La classe Date//
    class Date{
    private:
        int jour, mois, annee;
    public:
        Date();
        Date(int jour, int mois, int annee);
        void afficher();
        ~Date();
    };


    //*********************//
    //La classe Horaire//
    class Horaire{
    private:
        int hour, mins;
    public:
        Horaire();
        Horaire(int h,int m);
        void afficher();
        ~Horaire();

    };
    //*********************//
    //La classe Duree//
    class Duree{
    private:
        int hours,minsD;
    public:
        Duree();
        Duree(int hd, int md);
        void afficher();
        ~Duree();
    };
}




#endif // TIMING_H_INCLUDED
