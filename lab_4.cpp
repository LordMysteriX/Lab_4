#include <iostream>
#include "pch.h"
#include <string>
#include "Header.h"
using namespace std;

void main(void) {
	char a, b, c;
	cin >> a;
	hotel hotel1("Grand hotel","Shewchenka 15","no", 12500, 100,350,9);
	hotel1.getName();
	hotel1.getPeople();
	hotel1.getAnimals();
	hotel1.getRooms();
	hotel1.getLocation();
	hotel1.getPrice();
	hotel1.getFloor();

	cin >> b ;
	hotel hotel2("Lviv hotel", "Stepana Bandera 8", "yes", 10000, 85, 320, 9);
	hotel2.getName();
	hotel2.getPeople();
	hotel2.getAnimals();
	hotel2.getRooms();
	hotel2.getLocation();
	hotel2.getPrice();
	hotel2.getFloor();

	cin >> c;
	hotel hotel3("5-Star hotel", "Ivana Franka 38", "yes", 16000, 110, 450, 12);
	hotel3.getName();
	hotel3.getPeople();
	hotel3.getAnimals();
	hotel3.getRooms();
	hotel3.getLocation();
	hotel3.getPrice();
	hotel3.getFloor();

	system("pause");
}


