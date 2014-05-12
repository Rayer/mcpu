/*
 * CustomAdmSocketProtocol.cpp
 *
 *  Created on: May 12, 2014
 *      Author: rayer
 */

#include "CustomAdmSocketProtocol.h"
#include <cstring>

//declare in header?
std::list<int> s_portArray;

CustomAdmSocketProtocol::CustomAdmSocketProtocol() {
	// TODO Auto-generated constructor stub
	s_portArray.push_back(12400);
}

CustomAdmSocketProtocol::~CustomAdmSocketProtocol() {
	// TODO Auto-generated destructor stub
}

std::list<int> CustomAdmSocketProtocol::getPortArray() {
	return s_portArray;
}

std::shared_ptr<Session> CustomAdmSocketProtocol::parseAuthRequest(const char* in) {

	Session* session = nullptr;
    
    //add a builder for session
	static Session* s_dummySession = new Session();
	s_dummySession->security_token = "1234567";
	s_dummySession->user_id = "Rayer";
	s_dummySession->user_group = "Rayer_Group";

	if(strcmp("1234567", in) == 0) {
		//grant by security token
		session = s_dummySession;
	}

	return std::shared_ptr<Session>(s_dummySession);
}

std::string CustomAdmSocketProtocol::sendAuthSuccess(const Session& session) {
	return session.security_token;
}

std::string CustomAdmSocketProtocol::sendAuthFail() {
	return "Failed";
}
