// Block Tower Game.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int towerHeight = 10;

void showTheTower(const int tower[towerHeight]) {

	for (int i = 0; i < towerHeight; ++i) {

		cout << "|";

		if (tower[i] == 1) {

			cout << "###";

		} else {

			cout << "   ";

		}

		cout << "|" << endl;

	}

	cout << "------------------" << endl;

}

bool addBlock(int tower[towerHeight]) {

	for (int i = 0; i < towerHeight; ++i) {
	
		if (tower[i] == 0) {

			tower[i] = 1;
			return true;

		}

	}

	return false;

}

bool unblock(int tower[towerHeight]) {

	for (int i = towerHeight - 1; i >= 0; --i) {

		if (tower[i] == 1) {

			tower[i] = 0;
			return true;
		}

	}

	return false;

}

int main()
{
	srand(time(0));
	int tower[towerHeight] = { 0 };
	cout << "Welcome to the Block Tower Game!" << endl;
	while (true) {
		showTheTower(tower);

		cout << "Press '1' to add a block, press '2' to remove a block, press '0' to exit: ";
		int choice;
		cin >> choice;

		if (choice == 1) {
			if (!addBlock(tower)) {
				cout << "The tower is completely full! You cannot add blocks." << endl;
			}
		}
		else if (choice == 2) {
			if (!unblock(tower)) {
				cout << "The tower is already empty! You cannot unblock." << endl;
			}
		}
		else if (choice == 0) {
			cout << "You have finished the game." << endl;
			break;
		}
		else {
			cout << "You have made an invalid choice." << endl;
		}
	}

	return 0;

}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
