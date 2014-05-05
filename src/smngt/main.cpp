#include <iostream>

class EntrySocketTranslator;
class ExitSocketTranslator;

class ISocketTranslator {
public:
    EntrySocketTranslator* getEntrySocketTranslator;
    ExitSocketTranslator* getExitSocketTranslator;
};

class ISocketManager {
public:
    //These defines Events
    void onStartGetSocketData();
    void onFinishGetSocketData();
    void onStartSendSocketData();
    void onFinishSendSocketData();
};


int main(int argc, char* argv[]) {
    std::cout << "Hello World!" << std::endl;
}
