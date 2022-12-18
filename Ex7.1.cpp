class Wheel{
    Wheel getWheel(){return this;}
};
class Hummer{
    public:
    class Wheel{
        a special type of wheel for the hummer
        int idHummerWheel;
        void setWheelIdHummer(int idHummerWheel){this->idHummerWheel=idHummerWheel;}
        int getIdCarriegeHummer(){return this->idHummerWheel;}
    };
    list<Wheel>hummerWheels;
    void changeWheelOfHummer(Wheel theChangedWheel,Wheel theWheel){it will change the wheel of the hummer
        list<Wheel>::iterator it;
        for (it = wheels.begin(); it != hummerWheels.end(); it++) {
			if ((*it).getIdCarriegeHummer() == theChangedWheel.getIdCarriegeHummer()) {
				wheels.erase(it);
				break;
			}
		}
		wheels.push_back(theWheel);
    }
    void removeTheWheelCarriege(Wheel theWheel){it will remove the wheel from the hummer's list of wheels
        list<Wheel>::iterator it;
		for (it = hummerWheels.begin(); it != hummerWheels.end(); it++) {
			if ((*it).id() == theWheel.id()) {
				wheels.erase(it);
				break;
			}
		}
    }
};
class Carriege{
   public:
   class Wheel{
        a special type of wheel for the carriege
        int idCarriegeWheel;
        void setWheelIdCarriege(int idCarriegeWheel){this->idCarriegeWheel=idCarriegeWheel;}
        int getIdCarriegeWheel(){return this->idCarriegeWheel;}
    };
    list<Wheel> carriegeWheels;
    void changeWheelOfCarriege(Wheel theChangedWheel,Wheel theWheel){it will change the specific wheel to the carriege's list of wheels
        for (it = wheels.begin(); it != carriegeWheels.end(); it++) {
			if ((*it).getIdCarriegeWheel() == theChangedWheel.getIdCarriegeWheel()) {
				wheels.erase(it);
				break;
			}
		}
		wheels.push_back(theWheel);
    }
    void removeTheWheelCarriege(Wheel theWheel){
        it will remove the specific wheel from the carriege's list of wheels
        list<Wheel>::iterator it;
		for (it = wheels.begin(); it != carriegeWheels.end(); it++) {
			if ((*it).id() == theWheel.id()) {
				wheels.erase(it);
				break;
			}
		}
    }
};
