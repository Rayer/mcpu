//
//  ISocketProtocol.h
//  MCPU
//
//  Created by Terminus on 5/11/14.
//
//

#ifndef __MCPU__ISocketProtocol__
#define __MCPU__ISocketProtocol__

#include <list>

template<typename DataType>
class ISocketProtocol {
public:
    virtual std::list<int> getPortArray() = 0;
    virtual int getSocketType() = 0;
    virtual DataType recv() = 0;
    virtual void send(DataType data) = 0;
};

#endif /* defined(__MCPU__ISocketProtocol__) */
