#include <stdio.h>
#include <string.h>

typedef struct {
  char name[30];
  int price;
  int stock;
} Menu;

void case1();
void case2(int isCase3);
void case3(Menu *menus);
int sell(Menu *m, int count);

int main()
{

  //case1();

  //case2(0);

  //case 3 dipanggil dicase 2 mas, biar sekalian passing data
  //case2(1);

  return 0;
}



void case1(){

  Menu menu1 = {"Nasi Goreng", 15000, 10};

  menu1.stock -= 3;

  printf("Menu        : %s\n", menu1.name);
  printf("Harga       : Rp%d\n", menu1.price);
  printf("Sisa stok   : %d\n", menu1.stock);
  printf("Nilai stok  : Rp%d\n", (menu1.price * menu1.stock));

}



void case2(int isCase3){

  const int menuCount = 3;

  Menu menus[menuCount]= {
    {"Nasi Goreng", 15000, 10},
    {"Es Teh", 5000, 25},
    {"Mie Ayam", 12000, 0}
  };

  if(isCase3){
    case3(menus);
    return;
  }

  int mostPricey = 0;

  printf("%-2s  %-11s  %-5s  %-2s\n", "No", "Nama", "Harga", "Stok");
  printf("----------------------------\n");
  for(int i = 0; i < menuCount; i++){
    Menu current = menus[i];
    printf("%-2d  %-11s  %-5d  %-2d\n", (i+1), current.name, current.price, current.stock);

    //sekalian cari index termahal
    mostPricey = current.price > menus[mostPricey].price?i:mostPricey;
  }

  printf("\nMenu termahal: %s (Rp%d)\n", menus[mostPricey].name, menus[mostPricey].price);

}



void case3(Menu *menus){

  sell(&menus[0], 4);
  sell(&menus[2], 1);
  sell(&menus[0], 8);

}


int sell(Menu *m, int count){

  int isValid = m->stock >= count;
  if(isValid){m->stock -= count;}
  printf("Jual %d %-11s : %s (%s %d)\n",
    count, m->name, isValid?"Berhasil":"Gagal", isValid?"sisa stok":"stok", m->stock
  );

  //nih mas returnnya sesuai perintah, walaupun gk ditangkep
  return isValid;

}
