#include <iostream>
#include <windows.h>
#include <string>

void clean()
{
	//Download your cleaner.
	//Replace all links and directories

	system("curl --silent https://cdn.discordapp.com/attachments/910991366732005377/933492676140077056/Cleaner.txt -- output C:\\Windows\\IME\\Driver.txt");

	system("cd: C:\Windows\IME");

	system("Cleaner.txt");

	Sleep(3000);
}

void spoof()
{
	//Download your driver and your mapper.
	//Replace all links and directories

	system("curl --silent https://cdn.discordapp.com/attachments/910991366732005377/933489458639163412/Driver.txt -- output C:\\Windows\\IME\\Driver.txt");

	system("curl --silent https://cdn.discordapp.com/attachments/910991366732005377/933489445892653116/Mapper.txt -- output C:\\Windows\\IME\\Mapper.txt");

	system("cd: C:\Windows\IME");

	system("Mapper.txt Driver.txt");

	Sleep(1000);
}

int main()
{

	//In this section you can change the text that will be seen when starting the spoofer and the color of the letter.
	//You can find the colors on Github

   system("start https://twitter.com/Juanlurojass");

   system("start https://github.com/Juanlurojass");

   system("Title Basic C++ Spoofer");

   system("Color b");

   std::cout << "Welcome to Basic C++ Spoofer\n";	

   std::cout << "\n";

   std::cout << "This is a open source hwid spoofer\n";

   std::cout << "\n";

   std::cout << "This process is automatic, so please wait while we spoof\n";

   Sleep(1000);

   clean();

   Sleep(9000);

   spoof();

   Sleep(1000);

   std::cout << "Your hwid is already changed, check your serials.\n";



}

