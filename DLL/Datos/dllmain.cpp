#include "pch.h"

#include "util.h"
#include "curl.h"

VOID Main() {
    Util::InitConsole();

    printf("Bienvenido A 𝙊𝙉𝙄𝙕𝙐𝙆ΛFN\n");
    Sleep(1000);
    printf("CREDITOS A  ROBIN POR CREAR EL SERVIDOR\n");
    Sleep(2000);
    printf(" CREDITOS A ROBIN POR HACER EL INJECTOR Y POR EL DLL\n");
    Sleep(3000);
    printf("INJECTANDO DLL... \n");
    Sleep(4000);
    printf("INJECTADO \n");
    Sleep(4000);
    printf("GRACIAS POR USAR EL SERVIDOR DE 𝙊𝙉𝙄𝙕𝙐𝙆ΛFN PUEDES CONTINUAR!!\n");
    Sleep(4000);

    InitCurl();
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    if (dwReason == DLL_PROCESS_ATTACH)
        Main();

    return TRUE;
}
