#include<iostream>
#include<string>


class Plants {
public:
	Plants(){}

	std::string GetName() {
		return name;
	}
	std::string GetSize() {
		return size;
	}
	std::string GetColour() {
		return colour;
	}
	int GetMaxHarvest() {
		return MaxHarvest;
	}




	std::string name;
	std::string size;
	std::string colour;
	int MaxHarvest;

	~Plants(){}
private:
	
};
class Harvest {
public:
	Harvest() {}
	std::string GetName() {
		return name;
	}
	std::string GetColour() {
		return colour;
	}
	int GetWeigth() {
		return weight;
	}

	std::string name;
	int weight;
	std::string colour;

	Harvest() {};
private:
};

class Yablonya :public Plants {
public:
	Yablonya() {
		name = "яблоня";
		size = "большой";
		colour = "белый";
		MaxHarvest = 10;
	}
	~Yablonya(){}
};
class RazzBush:public Plants {
public:
	RazzBush() {
		name = "малина";
		size = "средний";
		colour = "зеленый";
		MaxHarvest = 155;
	}
	~RazzBush() {}
};
class CowberryBush :public Plants {
public:
	CowberryBush() {
		name = "брусника";
		size = "маленький";
		colour = "серобуромалиновый";
		MaxHarvest = 999;
	}
	~CowberryBush() {}
};

class Grusha:public Harvest {
public:
	Grusha() {
		name="груша";
		weight=2;
		colour="желтый";
	}
};
class Acorn :public Harvest {
public:
	Acorn() {
		name = "желудь";
		weight = 10;
		colour = "коричневый";
	}
	~Acorn(){}
};
class Cowberry :public Harvest {
public:
	Cowberry() {
		name = "брусника";
		weight = 3;
		colour = "красный";
	}
	~Cowberry() {}
};



int main() {

	return 0;
}