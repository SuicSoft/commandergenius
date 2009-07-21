/*
 * CMessages.h
 *
 *  Created on: 16.07.2009
 *      Author: gerstrong
 */

#ifndef CMESSAGES_H_
#define CMESSAGES_H_

#include <list>
#include <string>
#include <iostream>

using namespace std;

// TODO: Make the strings a class, but it must read from the exe-files basing on uncompressed buffer

class CMessages {
public:
	CMessages();
	virtual ~CMessages();

	bool readData(char *buf, int episode, int version);
	char *getString(const char *IDtext);

private:
	list<string> StringList;
	list<string> StringIDList;
};

#endif /* CMESSAGES_H_ */
