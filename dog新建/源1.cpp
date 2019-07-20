class Dog{
public:
	Dog(int weight,int age):
		itsweight(weight),itsage(age){
	}
	~Dog(){
	}

	int getweight(){
		return itsweight;
	}
	void setweight(int weight){
		itsweight=weight;
	}

	int getage(){
		return itsage;
	}

	void setage(int age){
		itsage=age;
	}
private:
	int itsweight;
	int itsage;
};