#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main (int total_argumen, char*nilai_argumen[])
{
  if(!(total_argumen == 3))
  {
    printf("inputan yang anda masukkan tidak sesuai");
    return EXIT_FAILURE;
  }

  char kembali;
  char username_i[20], password_i[20];
  strcpy(username_i, nilai_argumen[1]);
  strcpy(password_i, nilai_argumen[2]);
  
  FILE *fptr;
  if((fptr = fopen("database/login.bin","rb")) == NULL)
  {
    printf("File tidak ditemukan");
    return EXIT_FAILURE;
  }
  
  typedef struct tiket_bioskop
  {
    char nama_film;
    int harga_tiket;
    int total_harga;
    char hari;
    char jam;
    char seat[2];
  }
  ticket;
  ticket siap;
  
  char akun[20];
  fread(akun,sizeof(char),sizeof(akun)/sizeof(char),fptr);
  fclose(fptr);
  
  /*username : ZeroOne
  password : root */
  

char *string[3];
char username[20], password[20];
int temp = 0;
  
string[0] = strtok(akun,"@");
while (string[temp++] != NULL)
{
string[temp] = strtok(NULL,"@");
}
strcpy(username, string[0]);
strcpy(password, string[1]);
printf("Username : %s\n", username);
printf("Password : %s\n", password);
if((strcmp(username_i, username) == 0) && (strcmp(password_i, password) == 0))
{
printf("\nSelamat anda berhasil login");
}
else
{
printf("Maaf anda gagal login");
return EXIT_FAILURE;
}
pesan :
//tampilan menu
printf("\n\n\t\t\t\t\tBIOSKOP ZeroOne\n\t\t\t\tJln. Bahasa C, nomor 5, Kota VS.
Code\n");
printf("
================================================================
======================\n");
printf("\tNO\tNama Film\t\t\tJam ke1\t\tJam ke2\t\tJam ke3\n");
printf("
================================================================
======================\n");
printf("\t1\tJurassic Park\t\t\t11.00\t\t14.00\t\t17.00\n");
printf("\t2\tKKN di Desa Penari\t\t11.00\t\t14.00\t\t17.00\n");
printf("\t3\tJujutsu Kaisen 0\t\t11.00\t\t14.00\t\t17.00\n");
printf("\t4\tEncanto\t\t\t\t11.00\t\t14.00\t\t17.00\n");
printf("
================================================================
======================\n");
printf("\nHarga Tiket :\nSetiap hari : Rp50000\n");
//inputan mau nonton film apa
printf("\nSilakan pilih film yang ingin anda pesan(1-4) : ");

//bagian login dan aplikasi
  scanf("%s", &siap.nama_film);

  //input hari mau nonton
  printf("\nPilih hari menonton\n1. Senin\t3. Rabu\t\t5. Jum'at\n2. Selasa\t4. Kamis\t6. Sabtu\n\t\t\t\t7. Minggu\nSilakan pilih hari (1-7) : ");
  scanf("%s",%siap.hari);
  //input jam nonton
  printf("\nPilih jam menonton ke(1-3): ");
  scanf("%s", %siap.jam);

  system ("cls");

  //tampilan seat
  printf("\n\tSeat Bioskop ZeroOne yang tersedia\n");
  printf("\t=============================================\n\n");

printf("\tA1\tA2\tA3\tA4\tA5\n\tB1\tB2\tB3\tB4\tB5\n\tC1\tC2\tC3\tC4\tC5\n\tD1\tD2\tD3\tD4\tD5\n\tE1\tE2\tE3\tE4\tE5\n");

  //pilih seat
  printf("\nPilih Seat (A-E) dan Nomor kursi (1-5): ");
  scanf("%s", &siap.seat);

  system("cls");

  siap.harga_tiket = 50000:
  printf("\nPEMBAYARAN TIKET BIOSKOP ZeroOne :\n\n");
  printf("=============================================\n");
  printf("NO FILM\t\tSEAT\tHARGA\n");
  printf("=============================================\n");
  printf("%c\t\t%s\t%d",siap.nama_film,siap.seat,siap.harga_tiket);
  printf("\n==============================================\n\n");

  printf("\n\nTiket Bioskop otomatis dicetak\n");

  printf("\n===================================================\n");
  printf("\t\tBIOSKOP ZeroOne\n");
  printf("===================================================\n");
  printf("Judul\t:");

    if(siap.nama_film =='1')
  {
    printf("Jurrasic Park\n");
  }
  else if (siap.nama_film == '2')
  {
    printf("KKN di Desa Penari\n");
  }
  else if (siap.nama_film == '3')
  {
    printf("Jujutsu Kaisen 0\n");
  }
  else if (siap.nama_film == '4')
  {
    printf("Encanto\n");
  }
  else{
    printf("Sistem telah error");
  }
  printf("Hari\t: ");
if (siap.hari =='1')
{
printf("Senin\n");
}
else if (siap.hari == '2')
{
  printf("Selasa\n");
}
else if (siap.hari == '3')
{
  printf("Rabu\n");
}
else if (siap.hari == '4')
{
  printf("Kamis\n");
}
else if (siap.hari == '5')
{
  printf("Jum'at\n");
}
else if (siap.hari == '6')
{
  printf("Sabtu\n");
}
else if (siap.hari == '7')
{
  printf("Minggu\n");
}
  else {
    printf("Sistem telah error\n");
  }
    printf("Pukul\t: ");
    if (siap.jam == '1')
    {
      printf("11.00\n");
    } else if (siap.jam == '2')
    {
      printf("14.00\n");
    } else if (siap.jam == '3')
    { 
      printf("17.00\n");
    } else {
      printf("\nSistem telah error\n");
    }

     printf("Seat\t: %s\n", siap.seat);
    printf("Harga\t: Rp%d\n", siap.harga_tiket);
    printf("====================================================\n");
    printf("\nHarap tiket dibawa saat ke bioskop");
    printf("\n\n\nTerimakasih telah memesan tiket di Bioskop ZeroOne ini ^_^\n\n");
    tidak :
    printf("Apakah anda ingin memesan tiket kembali\n[Y/T] ? \n\n");
    kembali = getche();
    if (kembali == 'y' || kembali == 'Y')
    goto pesan;
    else if (kembali == 't' || kembali == 'T')
    {
    printf("\n==========================");
    printf("\n       TERIMA KASIH       ");
    printf("\n==========================");
    }
    return 0;
