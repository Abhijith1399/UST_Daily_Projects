#include"user.h"

bool User::checkpassword(string pas)
{
	return this->password == pas;
}