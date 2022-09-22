#include <iostream>
using namespace std;

//8
class Tour {
public:
  void paket() {
    cout << "Ви можете обрати будь-яку країну, обрати путівку" << endl;
  }
};
class Tourist {
public:
  Tourist(string n) {
    name = n;
  }
  void oplatyty(int prise) {
    cost = prise;
  }
  void choose(string pl) {
    kraina = pl;
  }
  string getName() {
    return name;
  }
  string getKraina() {
    return kraina;
  }
  int getCost() {
    return cost;
  }
public:
  int defaultCost = 20;
private:
  string name;
  string kraina;
  int cost;
};
int main() {
  Tour e;
  e.paket();
  Tourist tur("my");
  tur.oplatyty(20);
  tur.choose("Kyiv");
  cout << "Доброго дня," << tur.getName() << " ви обрали країну: " << tur.getKraina() << " стандартна ціна= " << tur.defaultCost << " ви заплатили: " << tur.getCost();
  
}



