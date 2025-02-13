Projekti: Menaxhimi i Filmave

Ky projekt është një program i thjeshtë në C++ që menaxhon një listë filmash dhe gjen filmin më të mirë bazuar në vitin e realizimit dhe vlerësimin IMDb.

Struktura e Kodit

Enumerimi Zhanri - Përmban llojet e ndryshme të zhanreve si AKSION, KOMEDI, DRAME, HORROR, dhe SCI_FI.

**Funksioni **zhanriNeString - Kthen një varg karakteresh që përfaqëson zhanrin e filmit.

**Struktura **Filmi - Përmban informacione për një film, si titulli, zhanri, aktorët, viti i realizimit, përshkrimi dhe vlerësimi IMDb.

**Funksioni **gjejFilminMeTeMire - Krahason filmat dhe kthen atë me vitin më të ri dhe vlerësimin IMDb më të lartë.

**Funksioni **shfaqRezultatin - Printon në ekran informacionet e filmit më të mirë.

**Funksioni **main - Krijon tre filma dhe thërret funksionet përkatëse për të gjetur dhe shfaqur filmin më të mirë.

**Funksioni pershkrimiZhanrit(Zhanri zhanri) – Kthen një përshkrim tekstual për secilin zhanër filmi.

**Funksioni shfaqZhanret() – Shfaq në ekran të gjithë zhanret e disponueshme.

Ndryshime të Bëra në Branch-in GjejFiliminMeTeMire

Në këtë branch, është optimizuar funksioni gjejFilminMeTeMire për të siguruar që filmi i përzgjedhur të ketë IMDb më të lartë në rastin kur ka disa filma me të njëjtin vit të realizimit. Kjo përmirëson saktësinë e zgjedhjes së filmit më të mirë.

Shembull i Output-it

Filmi me i mire:
Titulli: Interstellar
Zhanri: Sci-Fi
Aktoret: Matthew McConaughey, Anne Hathaway,
Viti i Relizimit: 2014
Pershkrimi: Udhetim neper vrima te zeza.
IMDb: 8.6

Si të përdoret

Kopjoni kodin në një skedar C++ (p.sh., filmi.cpp).

Kompiloni dhe ekzekutoni programin duke përdorur një kompilues si g++:

g++ filmi.cpp -o filmi
./filmi

Përmirësime të mundshme

Shtimi i më shumë filmave nga përdoruesi në vend që të jenë të paracaktuar.

Ruajtja e filmave në një skedar për përdorim të mëvonshëm.

Implementimi i një ndërfaqeje grafike për një përvojë më të mirë të përdoruesit.

