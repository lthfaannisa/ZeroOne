//pembuatan file bin




  FILE *fpw = fopen("database/login.bin","wb");
  char login[20] = "ZeroOne@root";
/*disini mau buat username ZeroOne
 passwordnya root dan @ sebagai pemisah antara username dan pass*/

  fwrite(login, sizeof(char), sizeof(login)/sizeof(char), fpw);

  fclose(fpw);

  return 0:
}
