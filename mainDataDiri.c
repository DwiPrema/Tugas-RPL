#include <stdio.h>
#include <stdlib.h>

int main()
{
    //data diri
    char nama[15];
    int usia;
    char alamat[30];
    char telp [44];
    int tinggi;
    int berat;

    //input
    printf ("input data diri\n");
    printf ("masukkan nama:");
    scanf ("%s",&nama);
    printf ("berapa usia anda:");
    scanf ("%i",&usia);
    printf ("masukkan alamat:");
    scanf ("%s",&alamat);
    printf ("masukkan nomor telp:(+62)");
    scanf ("%s",&telp);
    printf ("masukkan tinggi badan:");
    scanf ("%i",&tinggi);
    printf ("masukkan berat badan:");
    scanf ("%i",&berat);

    //output
    printf ("---------------------------------------------------------------------\n");
    printf ("Nama : %s\n", nama);
    printf ("Usia : %i\n", usia);
    printf ("Alamat : %s\n", alamat);
    printf ("Nomor Telp :(+62)%s\n", telp);
    printf ("Tinggi Badan :%i CM\n", tinggi);
    printf ("Berat Badan : %i KG\n", berat);

    return 0;
}

