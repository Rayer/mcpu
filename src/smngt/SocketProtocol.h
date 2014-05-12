//
//  ISocketProtocol.h
//  MCPU
//
//  Created by Terminus on 5/11/14.
//
//

#ifndef __MCPU__SocketProtocol__
#define __MCPU__SocketProtocol__

#include <list>

class SocketWrapper;

template<typename DataType>
class SocketProtocol {
public:
	virtual ~SocketProtocol(){};
    virtual std::list<int> getPortArray() = 0;
    virtual int getSocketType() = 0;
    virtual DataType processMessage(DataType in) = 0;
};

#endif /* defined(__MCPU__ISocketProtocol__) */
