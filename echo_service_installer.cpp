#include "echo_service_installer.h"

// 호스트에 EchoService를 설치한다.
EchoService *EchoServiceInstaller::install(Host *host)
{
    e = new EchoService(host, host->address().toShort());
    ServiceInstaller::install(host, e);
    return e;
}