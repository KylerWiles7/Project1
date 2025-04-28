#include <iostream>
#include <string>
using namespace std;
class Time{
private:
	int hour;
	int minute;
	int second;
	int tHour;
	int tMinute;
	int tSecond;
	int mHour;
public:
	Time();
	void newTime(int hour, int minute, int second);
	
	
};


Time::Time() {
	hour = 12;
	minute = 0;
	second = 0;
	tHour = 0;
	tMinute = 0;
	tSecond = 0;
	mHour = 0;
	cout<<"The time is: " << hour << ":" << minute << ":" << second << "AM " << "\n";
}

void Time::newTime(int hour, int minute, int second) {
	
	while (true) {
		

		cin >> hour;
		cin >> minute;
		cin >> second;
		tHour += hour;
		tMinute += minute;
		tSecond += second;
		mHour += hour;
		if (tMinute > 60)
			tMinute = tMinute % 60;
		if (tSecond > 60)
			tSecond = tSecond % 60;
		if (mHour > 12)
			mHour = mHour % 24;

		

		if (tHour < 12)	
			cout << "standard time " << tHour%12 << ":" << tMinute << ":" << tSecond << " AM"<<"\n";
		else
			cout << "standard time " << tHour%12 << ":" << tMinute << ":" << tSecond << " PM"<<"\n";
		if (mHour<12)
			cout<<"military time "<< mHour%24 << ":" << tMinute << ":" << tSecond << " AM"<<"\n";
		else
			cout << "military time " << mHour%24  << ":" << tMinute << ":" << tSecond << " PM" << "\n";
		


		cout << "Type n if you are done, to continue type anything"<<"\n";
		string input;
		cin >> input;
		if (input == "n")
			return;
		else;
			cout << "Okay you can do another time calulation type hour minute and second seperated by spaces"<<"\n";
		
	}
	
		
}


int main()
{	
	Time time;
	int hour{}, minute{}, second{};
	cout << "Enter Hour, Minute and Second seperated by spaces";	
	time.newTime(hour, minute, second);
	
	
	//this main() is adorable lol
	

}