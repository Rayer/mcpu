/*
 * CustomAdmSocketProtocol.h
 *
 *  Created on: May 12, 2014
 *      Author: rayer
 */

#ifndef CUSTOMADMSOCKETPROTOCOL_H_
#define CUSTOMADMSOCKETPROTOCOL_H_

#include "AdmSocketProtocol.h"

class CustomAdmSocketProtocol: public AdmSocketProtocol {
public:
	CustomAdmSocketProtocol();
	virtual ~CustomAdmSocketProtocol();

    virtual std::list<int> getPortArray() = 0;
    virtual int getSocketType() = 0;
    virtual std::shared_ptr<Session> parseAuthRequest(const char* parse);
    virtual std::string sendAuthSuccess(const Session& session);
    virtual std::string sendAuthFail();
};

#endif /* CUSTOMADMSOCKETPROTOCOL_H_ */
