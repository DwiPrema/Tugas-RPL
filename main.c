#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int total = 0; // variabel global untuk menyimpan total harga

int main() {
    pilihMenu();
    return 0;
}

void pilihMenu() {
    int menu, jumlah, harga = 0;

    printf("\t\tPilih Menu Makanan\n");
    printf("[1]. Nasi Goreng (Rp 10,000)\n");
    printf("[2]. Sate Ayam (Rp 12,000)\n");
    printf("[3]. Soto Ayam (Rp 8,000)\n");
    printf("[4]. Soto Sapi (Rp 15,000)\n");
    printf("[5]. Es Teh (Rp 5,000)\n");
    printf("[6]. Es Campur (Rp 10,000)\n");
    printf("[7]. Teh Anget (Rp 4,000)\n");

    printf("Masukkan Pilihan Anda: ");
    scanf("%d", &menu);
    printf("Masukkan Jumlah Pembelian: ");
    scanf("%d", &jumlah);

    switch (menu) {
        case 1:
            harga = jumlah * 10000;
            break;
        case 2:
            harga = jumlah * 12000;
            break;
        case 3:
            harga = jumlah * 8000;
            break;
        case 4:
            harga = jumlah * 15000;
            break;
        case 5:
            harga = jumlah * 5000;
            break;
        case 6:
            harga = jumlah * 10000;
            break;
        case 7:
            harga = jumlah * 4000;
            break;
        default:
            printf("Menu tidak valid!\n");
            pilihMenu(); // jika input tidak valid, ulangi pemilihan menu
            return;
    }

    total += harga; // tambahkan harga ke total keseluruhan
    printf("Subtotal Harga: Rp %d\n", harga);

    char lagi;
    printf("Apakah ingin memilih menu lain? (y/n): ");
    scanf(" %c", &lagi);

    if (lagi == 'y' || lagi == 'Y') {
        pilihMenu(); // panggil kembali fungsi pilihMenu untuk memilih menu lain
    } else {
        printf("Total Harga Keseluruhan: Rp %d\n", total);
    }
}
