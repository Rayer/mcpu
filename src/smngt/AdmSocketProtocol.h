//
//  AdmSocketProtocol.h
//  MCPU
//
//  Created by Terminus on 5/11/14.
//
//

#ifndef MCPU_AdmSocketProtocol_h
#define MCPU_AdmSocketProtocol_h

#include "ISocketProtocol.h"

#include <string>

struct Session {
    time_t join_time;
    time_t expire_time;
    std::string user_id;
    std::string user_group;
};

class AdmSocketProtocol : public ISocketProtocol<const char*> {
    virtual Session parseAuthRequest();
    virtual void sendAuthSuccess();
    virtual void sendAuthFail();
};

#endif
