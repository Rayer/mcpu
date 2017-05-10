# Multipropose Communication Process Unit (MCPU)
-----

## Intruduction

This is a small daemon-like application which provides these functionality :

- Easy standalone server
- Flexible module installation, for example, a simple HTTP Server or a simple RESTful server can be installed in a single zip file.
- Provides customized communication. These MCPUs can be communicated each other, and the communication protocol can be altered, too.
- Supports KAD protocol.

## Specification

It is divided into these parts

- MCPU Management Center(MMC)
- Daemon-lize module
- Basic socket management, with an extendable hooker
- Basic communication management, with a replaceable communication protocol.
- Basic KAD hook

### MCPU Management Center
It will provide these feature 

1. Given a protocol file, it will try to discovery and try to authorize LOCAL MCPUs
2. Given a protocol file and server list, it will try to discovery and authorize LOCAL and REMOTE MCPUs
3. It can provide managed MCPU list to authorized host, and it can be host, too.


### Daemon-lize module
1. It can be customized daemonlized, just provide a thread or a process.
2. It also provide a default linux daemon


### Socket management module

### Communication module

### KAD hook and Network Discovery
