#include <iostream>
#include "../Program/Potion.h"

using namespace std;

/*class Consumable {
protected:
	const char* name;
public:
		Consumable() {
			cout << "Created Consumable" << endl;
		}
		~Consumable() {
			cout << "Destroyed Consumable" << endl;
		}
};

class Potion : public Consumable {
private:
	int stamina;
public:
	Potion() {
		cout << "Created Potion" << endl;
	}
	~Potion() {
		cout << "Destroyed Potion" << endl;
	}
};*/

int main()
{
#pragma region 상속
	// 상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	// 설정하는 기능입니다.

	// Consumable consumable;
	// Potion potion;
	// cout << "Consumable Size : " << sizeof(consumable) << endl;
	// cout << "Potion Size : " << sizeof(potion) << endl;

	Consumable consumable;
	Potion potion;

#pragma endregion

	return 0;
}