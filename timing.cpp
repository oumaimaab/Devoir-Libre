#include<iostream>
#include"timing.h"
#include <time.h>
#include<ctime>
using namespace std;
time_t theTime = time(NULL);
struct tm *aTime = localtime(&theTime);

int day   = aTime->tm_mday;
int month = aTime->tm_mon + 1;
int year  = aTime->tm_year + 1900;
int timeHours = aTime->tm_hour+1;
int timeMins = aTime->tm_min+1;

TIME::Date::Date():jour(day),mois(month),annee(year){};
TIME::Date::Date(int day,int month,int year):jour(day),mois(month),annee(year){};
void TIME::Date::afficher(){
    cout<<"Jour : "<<jour<<"\nMois : "<<mois<<"\nAnnee : "<<annee<<endl;
}
TIME::Date::~Date(){};
//******************//
TIME::Horaire::Horaire():hour(timeHours),mins(timeMins){};
TIME::Horaire::Horaire(int h,int m):hour(h),mins(m){};
void TIME::Horaire::afficher(){
    cout<<"Horaire : "<<hour<<":"<<mins<<endl;
}
TIME::Horaire::~Horaire(){};
//******************//
TIME::Duree::Duree():hours(0),minsD(0){};
TIME::Duree::Duree(int hd, int md):hours(hd),minsD(md){};
void TIME::Duree::afficher(){
    cout<<"Duree : "<<hours<<":"<<minsD<<endl;
}
