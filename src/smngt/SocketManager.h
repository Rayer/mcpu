//
//  SocketManager.h
//  MCPU
//
//  Created by Rayer Shih on 5/13/14.
//
//

#ifndef __MCPU__SocketManager__
#define __MCPU__SocketManager__

#include <memory>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/time.h>


class SocketProtocol;
class AdmSocketProtocol;

class SocketManager {
private:
    SocketProtocol* _dataProtocol;
    AdmSocketProtocol* _admProtocol;
    int _dataSocket;
    int _admSocket;
    
    bool init(int dataPort, int admPort);
    void update(double delta);
};

#endif /* defined(__MCPU__SocketManager__) */
