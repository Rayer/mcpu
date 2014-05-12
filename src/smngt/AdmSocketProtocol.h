//
//  AdmSocketProtocol.h
//  MCPU
//
//  Created by Terminus on 5/11/14.
//
//

#ifndef MCPU_AdmSocketProtocol_h
#define MCPU_AdmSocketProtocol_h

#include "SocketProtocol.h"

#include <string>
#include <memory>

struct Session {
	std::string security_token;
    time_t join_time;
    time_t expire_time;
    std::string user_id;
    std::string user_group;
};

class AdmSocketProtocol : public SocketProtocol<const char*> {


protected:
	virtual ~AdmSocketProtocol() {};
	virtual const char* processMessage(const char* in);
    virtual std::shared_ptr<Session> parseAuthRequest(const char* parse) = 0;
    virtual std::string sendAuthSuccess(const Session& session) = 0;
    virtual std::string sendAuthFail() = 0;
};

#endif
