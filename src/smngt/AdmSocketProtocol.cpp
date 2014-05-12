//
//  AdmSocketProtocol.cpp
//  MCPU
//
//  Created by Terminus on 5/11/14.
//
//

#include "AdmSocketProtocol.h"


const char* AdmSocketProtocol::processMessage(const char* in) {

	//Let child to decide session handling
	std::shared_ptr<Session> session = parseAuthRequest(in);

	if(session == nullptr) {
		//auth failed
		return sendAuthFail().c_str();
	}
	//Register session
	return sendAuthSuccess(*session).c_str();
}

