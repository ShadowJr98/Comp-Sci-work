//specification file for the Persons personal information.
#ifndef PersonalInfo
#define PersonalInfo

//class declaration

class Pinfo
{
private:
	char nameinfo;
	char addrinfo;
	char ageinfo;
	char phnnuminfo;

public:
	void name(char);
	void address(char);
	void age(char);
	void phoneNumber(char);
};

#endif