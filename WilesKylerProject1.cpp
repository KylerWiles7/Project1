#include <iostream>
#include <string>

class Time{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	void newTime(int hour, int minute, int second);
	
	
};


void Time::newTime(int hour, int minute, int second) {
	
	while (true) {
		

		std::cin >> hour;
		std::cin >> minute;
		std::cin >> second;
		int tHour;
		//int tHour=hour;
		//int tMinute;
		//int tSecond;

		if (hour < 12)
			// trying to create temporary value for hours so I can incriment time 
			//over each calulation but this does not work. I do not know why the value never updates
			//hour += tHour;
			hour = tHour;
			hour += tHour;
			std::cout << "standard time " << tHour << ":" << minute << ":" << second << " AM"<<"\n";
			aheas

		if (hour==12)
			std::cout << "standard time " << hour  << ":" << minute << ":" << second << " PM" << "\n";
		else if (hour>12)
			std::cout << "standard time " << hour%12 << ":" << minute << ":" << second << " PM"<<"\n";
		if (hour<12)
			std::cout<<"military time "<< hour << ":" << minute << ":" << second << " AM"<<"\n";
		else
			std::cout << "military time " << hour << ":" << minute << ":" << second << " PM"<<"\n";
		


		std::cout << "Type n if you are done, to continue type anything"<<"\n";
		std::string input;
		std::cin >> input;
		if (input == "n")
			return;
		else;
		std::cout << "Okay you can do another time calulation type hour minute and second"<<"\n";
		
	}
	
		
}


int main()
{	
	Time time;
	int hour{}, minute{}, second{};
	std::cout << "Enter Hour, Minute and Second";	
	time.newTime(hour, minute, second);
	
	

	
	

	



}