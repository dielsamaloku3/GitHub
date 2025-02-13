#include <iostream>
#include <string>
using namespace std;

// Deklarimi i enumerimit per zhanret
enum Zhanri {
    AKSION,
    KOMEDI,
    DRAME,
    HORROR,
    SCI_FI
};

// Funksioni per te kthyer emrin e zhanrit si tekst
string zhanriNeString(Zhanri zhanri) {
    switch (zhanri) {
    case AKSION: return "Aksion";
    case KOMEDI: return "Komedi";
    case DRAME: return "Drame";
    case HORROR: return "Horror";
    case SCI_FI: return "Sci-Fi";
    default: return "I Panjohur";
    }
}
// Funksioni per te marre pershkrimin e nje zhanri
string pershkrimiZhanrit(Zhanri zhanri) {
    switch (zhanri) {
    case AKSION: return "Filma me skena te shpejta dhe te mbushura me adrenaline.";
    case KOMEDI: return "Filma qesharake per argetim dhe humor.";
    case DRAME: return "Filma me histori serioze dhe emocionale.";
    case HORROR: return "Filma te frikshem qe synojne te krijojne tension.";
    case SCI_FI: return "Filma fantastiko-shkencore me elemente imagjinare.";
    default: return "Nuk ka pershkrim te disponueshem.";
    }
}

// Funksioni per te shfaqur te gjithe zhanret e mundshme
void shfaqZhanret() {
    cout << "Zhanret e disponueshme:" << endl;
    for (int i = AKSION; i <= SCI_FI; i++) {
        cout << "- " << zhanriNeString(static_cast<Zhanri>(i)) << endl;
    }
}

// Struktura Filmi
struct Filmi {
    string titulli;
    Zhanri zhanri;
    string aktoret[3];
    int viti_i_relizimit;
    string pershkrimi;
    double imdb;
};

// Funksioni per te gjetur filmin me te ri dhe me IMDb me te larte
Filmi gjejFilminMeTeMire(Filmi filma[], int madhesia) {
    Filmi meIMDBteLarte = filma[0];
    for (int i = 1; i < madhesia; i++) {
       if (filma[i].imdb > meIMDBteLarte.imdb ||
    (filma[i].imdb == meIMDBteLarte.imdb && filma[i].viti_i_relizimit > meIMDBteLarte.viti_i_relizimit)) {

    }
    return meIMDBteLarte;
}

// Funksioni per te shfaqur rezultatin
void shfaqRezultatin(Filmi filmi) {
    cout << "Filmi me i mire:" << endl;
    cout << "Titulli: " << filmi.titulli << endl;
    cout << "Zhanri: " << zhanriNeString(filmi.zhanri) << endl;
    cout << "Aktoret: ";
    for (string aktor : filmi.aktoret) {
        if (!aktor.empty()) {
            cout << aktor << ", ";
        }
    }
    cout << "\nViti i Relizimit: " << filmi.viti_i_relizimit << endl;
    cout << "Pershkrimi: " << filmi.pershkrimi << endl;
    cout << "IMDb: " << filmi.imdb << endl;
}

int main() {
    // Krijimi i 3 instancave te filmit
    Filmi film1 = { "Inception", SCI_FI, {"Leonardo DiCaprio", "Joseph Gordon-Levitt", ""}, 2010, "Nje udhetim ne subkoshience.", 8.8 };
    Filmi film2 = { "The Dark Knight", AKSION, {"Christian Bale", "Heath Ledger", ""}, 2008, "Lufta e Batman kunder Jokerit.", 9.0 };
    Filmi film3 = { "Interstellar", SCI_FI, {"Matthew McConaughey", "Anne Hathaway", ""}, 2014, "Udhetim neper vrima te zeza.", 8.6 };

    // Vendosja e filmave ne nje array
    Filmi filma[] = { film1, film2, film3 };

    // Gjetja e filmit me te mire
    Filmi filmiMeIMDB = gjejFilminMeTeMire(filma, 3);

    // Shfaqja e rezultatit
    shfaqRezultatin(filmiMeIMDB);

    return 0;
}
